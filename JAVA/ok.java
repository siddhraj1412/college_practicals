// Abstract class Payment
abstract class Payment {
    protected double amount;

    // Abstract method to process payment
    public abstract void processPayment(double amount);

    // Abstract method to get payment details
    public abstract String getPaymentDetails();
}

// CreditCardPayment class derived from Payment
class CreditCardPayment extends Payment {
    private String cardNumber;
    private String cardHolderName;

    // Constructor
    public CreditCardPayment(String cardNumber, String cardHolderName) {
        this.cardNumber = cardNumber;
        this.cardHolderName = cardHolderName;
    }

    // Implement processPayment for credit card
    @Override
    public void processPayment(double amount) {
        this.amount = amount;
        System.out.println("Processing credit card payment of $" + amount);
    }

    // Implement getPaymentDetails for credit card
    @Override
    public String getPaymentDetails() {
        return "Credit Card Payment [Card Holder: " + cardHolderName + ", Card Number: " + cardNumber + "]";
    }
}

// PayPalPayment class derived from Payment
class PayPalPayment extends Payment {
    private String email;

    // Constructor
    public PayPalPayment(String email) {
        this.email = email;
    }

    // Implement processPayment for PayPal
    @Override
    public void processPayment(double amount) {
        this.amount = amount;
        System.out.println("Processing PayPal payment of $" + amount);
    }

    // Implement getPaymentDetails for PayPal
    @Override
    public String getPaymentDetails() {
        return "PayPal Payment [Email: " + email + "]";
    }
}

// Interface Transaction
interface Transaction {
    void executeTransaction(Payment payment);
}

// TransactionProcessor class implementing Transaction
class TransactionProcessor implements Transaction {

    // executeTransaction method processes the payment and prints details
    @Override
    public void executeTransaction(Payment payment) {
        payment.processPayment(payment.amount);
        System.out.println(payment.getPaymentDetails());
    }
}

// Main class to demonstrate processing of different payments
public class ok{
    public static void main(String[] args) {
        // Create payment instances
        Payment creditCardPayment = new CreditCardPayment("1234-5678-9012-3456", "Alice");
        Payment payPalPayment = new PayPalPayment("alice@example.com");

        // Create TransactionProcessor instance
        TransactionProcessor transactionProcessor = new TransactionProcessor();

        // Process credit card payment
        System.out.println("Executing Credit Card Transaction:");
        transactionProcessor.executeTransaction(creditCardPayment);

        // Process PayPal payment
        System.out.println("\nExecuting PayPal Transaction:");
        transactionProcessor.executeTransaction(payPalPayment);
    }
}
