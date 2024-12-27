// first approach

#include <iostream>
using namespace std;

// Brute force approach to add an element at the beginning
void addElementToBeginning(int arr[], int size, int newElement) {
    int updatedSize = size + 1;  // Updated size of the array
    int updatedArr[updatedSize];  // Create a new array of larger size (O(n) space)

    updatedArr[0] = newElement;  // Insert the new element at the beginning (O(1))

    // Copy all elements from the original array to the new array (O(n) time)
    for (int i = 0; i < size; i++) {
        updatedArr[i + 1] = arr[i];
    }

    // Print the updated array
    cout << "Updated array: ";
    for (int i = 0; i < updatedSize; i++) {
        cout << updatedArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums[] = {1, 2, 3, 4};  // Original array
    int size = sizeof(nums) / sizeof(nums[0]);  // Array size
    int newElement = 0;  // Element to add

    addElementToBeginning(nums, size, newElement);

    return 0;
}