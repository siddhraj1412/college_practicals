#include <iostream>
#include <vector>

class MergeSortWithCounting {
public:
    // Counter for primitive operations
    static int operationCount;

    // Merge Sort function that divides the array into two halves and calls itself recursively
    static void mergeSort(std::vector<int>& array) {
        if (array.size() <= 1) {
            return; // Base case: If the array has 1 or fewer elements, it's already sorted
        }

        // Divide the array into two halves
        int middle = array.size() / 2;
        std::vector<int> left(array.begin(), array.begin() + middle);
        std::vector<int> right(array.begin() + middle, array.end());

        // Recursively sort the two halves
        mergeSort(left);
        mergeSort(right);

        // Merge the sorted halves
        merge(array, left, right);
    }

    // Merge function that merges two sorted arrays into one
    static void merge(std::vector<int>& array, const std::vector<int>& left, const std::vector<int>& right) {
        int i = 0, j = 0, k = 0;

        // Compare each element and merge the arrays in sorted order
        while (i < left.size() && j < right.size()) {
            operationCount++; // Incrementing for the comparison operation
            if (left[i] <= right[j]) {
                array[k++] = left[i++];
                operationCount++; // Incrementing for the assignment operation
            } else {
                array[k++] = right[j++];
                operationCount++; // Incrementing for the assignment operation
            }
        }

        // If there are remaining elements in the left array, add them
        while (i < left.size()) {
            array[k++] = left[i++];
            operationCount++; // Incrementing for the assignment operation
        }

        // If there are remaining elements in the right array, add them
        while (j < right.size()) {
            array[k++] = right[j++];
            operationCount++; // Incrementing for the assignment operation
        }
    }

    // Helper function to print an array
    static void printArray(const std::vector<int>& array) {
        for (int num : array) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    // Main method to test Merge Sort
    static void main() {
        std::vector<int> array = {5,4,3,2,1};
        std::cout << "Original Array: " << std::endl;
        printArray(array);

        // Reset the operation counter before sorting
        operationCount = 0;

        mergeSort(array);

        std::cout << "Sorted Array: " << std::endl;
        printArray(array);

        // Print the count of primitive operations
        std::cout << "Number of primitive operations: " << operationCount << std::endl;
    }
};

// Initialize static member
int MergeSortWithCounting::operationCount = 0;

int main() {
    MergeSortWithCounting::main();
    return 0;
}



