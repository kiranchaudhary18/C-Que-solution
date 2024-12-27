// Given an array of integers, count how many numbers are even and how many are odd.
// Example:
// Input: [1, 2, 3, 4, 5]
// Output: Even: 2, Odd: 3


#include <iostream>

using namespace std;

void function(){
    int even=0;
    int odd=0;
    
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
        if(arr[i]%2==0){
            even=even+1;
        }
        else {
            odd=odd+1;
        }
    
    cout <<"even :"<<even<<endl;
    cout <<"odd :"<< odd;
}
int main() {
   
function();
    return 0;
}