import java.util.ArrayList;
import java.util.List;

class OrderProcessor implements Runnable {
    private static int totalOrdersProcessed = 0; // Static variable to maintain total orders count
    private static final Object lock = new Object(); // Lock for synchronization

    private final String orderName;
    private final List<Integer> itemPrices;

    public OrderProcessor(String orderName, List<Integer> itemPrices) {
        this.orderName = orderName;
        this.itemPrices = itemPrices;
    }

    @Override
    public void run() {
        try {
            int totalPrice = calculateTotalPrice(itemPrices);
            System.out.println(orderName + " Total: " + totalPrice);

            // Update total orders processed safely using synchronization
            synchronized (lock) {
                totalOrdersProcessed++;
            }
        } catch (IllegalArgumentException e) {
            System.out.println("Error in " + orderName + ": " + e.getMessage());
        }
    }

    private int calculateTotalPrice(List<Integer> prices) {
        int total = 0;
        for (int price : prices) {
            if (price < 0) {
                throw new IllegalArgumentException("Item price cannot be negative.");
            }
            total += price;
        }
        return total;
    }

    public static int getTotalOrdersProcessed() {
        synchronized (lock) {
            return totalOrdersProcessed;
        }
    }
}

public class MultithreadedOrderProcessor {
    public static void main(String[] args) {
        // Sample orders
        List<Integer> order1Items = List.of(200, 300, 150);
        List<Integer> order2Items = List.of(100, 250);
        List<Integer> order3Items = List.of(50, -10); // Contains invalid price

        // Create threads for each order
        Thread order1 = new Thread(new OrderProcessor("Order 1", order1Items));
        Thread order2 = new Thread(new OrderProcessor("Order 2", order2Items));
        Thread order3 = new Thread(new OrderProcessor("Order 3", order3Items));

        // Start threads
        order1.start();
        order2.start();
        order3.start();

        // Wait for threads to finish
        try {
            order1.join();
            order2.join();
            order3.join();
        } catch (InterruptedException e) {
            System.out.println("Thread interrupted: " + e.getMessage());
        }

        // Display total orders processed
        System.out.println("Total Orders Processed: " + OrderProcessor.getTotalOrdersProcessed());
    }
}
