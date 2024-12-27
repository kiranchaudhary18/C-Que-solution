// Sort an Array in Ascending Order Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].

#include <iostream>  
#include <algorithm>  

using namespace std;  


void sortArray(int arr[], int size) {
    sort(arr, arr + size);  }

int main() {

    int nums[] = {4, 2, 8, 5, 1};
    int size = sizeof(nums) / sizeof(nums[0]);  
    

    sortArray(nums, size);  
  
    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";  
    }
    cout << endl;
    
    return 0;  
}