// first approach


#include <iostream>
using namespace std;

void removeLastElementBruteForce(int arr[], int size) {
    int newArr[size - 1];  // Create a new array to store the result

    // Copy all elements from arr except the last one
    for (int i = 0; i < size - 1; i++) {
        newArr[i] = arr[i];
    }

    // Print the new array after removing the last element
    for (int i = 0; i < size - 1; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    removeLastElementBruteForce(arr, size);  // Call the function to remove the last element
    return 0;
}


// second approach


#include <iostream>
using namespace std;

void removeLastElementEasy(int arr[], int &size) {
    if (size > 0) {
        // Shift all elements to the left by one position
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;  // Decrease the size of the array
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    removeLastElementEasy(arr, size);  // Call the function to remove the last element

    // Print the updated array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


// third approach

#include <iostream>
using namespace std;

void removeLastElementModerate(int arr[], int &size) {
    if (size > 0) {
        int lastElement = arr[size - 1];  // Store the last element in a temporary variable
        arr[size - 1] = 0;  // Replace the last element with zero (or any placeholder)
        size--;  // Decrease the size of the array
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    removeLastElementModerate(arr, size);  // Call the function to remove the last element

    // Print the updated array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}