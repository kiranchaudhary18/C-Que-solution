// first approach

#include <iostream>
using namespace std;

bool areAllPositiveBruteForce(int arr[], int size) {
    for (int i = 0; i < size; i++) { // Iterate through the array
        if (arr[i] <= 0) {           // Check if an element is non-positive
            return false;            // Return false if any element is <= 0
        }
    }
    return true;                     // All elements are positive
}

int main() {
    int arr[] = {3, 5, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (areAllPositiveBruteForce(arr, size)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}



// second approach


#include <iostream>
using namespace std;

bool areAllPositiveEasy(int arr[], int size) {
    bool allPositive = true; // Assume all numbers are positive initially

    for (int i = 0; i < size; i++) {
        if (arr[i] <= 0) {     // If any number is non-positive
            allPositive = false;
            break;             // Exit the loop immediately
        }
    }

    return allPositive;        // Return the flag value
}

int main() {
    int arr[] = {3, 5, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (areAllPositiveEasy(arr, size)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}



// third approach

#include <iostream>
using namespace std;

bool isNonPositive(int num) {
    return num <= 0; // Check if a single number is non-positive
}

bool areAllPositiveModerate(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (isNonPositive(arr[i])) { // Call the helper function
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {3, 5, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (areAllPositiveModerate(arr, size)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}