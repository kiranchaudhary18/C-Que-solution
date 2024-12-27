// Find the Average of an Array. Example: Input: arr=[1,2,3,4,5]; Output: 3



#include <iostream>

using namespace std;

void function(){

int arr[]={1,2,3,4,5};
int sum=0;
for(int i=0;i<5;i++)
    sum=sum+arr[i];
    cout << sum/5;

}

int main() {
    
     function();
    return 0;
}