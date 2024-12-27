// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>

using namespace std;

bool function (int arr[],int size){
    // for (int i=0;i<size-1;i++){
    //     if(arr[i]>arr[i+1]){
    //         return false ;
    //     }
    // }
    // return true;
    
    return std::is_sorted(arr,arr+size);
}

int main() {
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);

   bool result = function(arr,size);
   
   if(result){
       cout << "true" <<endl;
   }
   else {
       cout << "false" << endl;
   }
    return 0;
}