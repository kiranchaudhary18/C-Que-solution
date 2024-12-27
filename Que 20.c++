// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>

using namespace std;

int function(int arr[],int size){
    // int maximum=arr[0];
    // int minimum=arr[0];
    
    // for(int i=0;i<size;i++){
    //     if(arr[i]>maximum){
    //         maximum=arr[i];
    //     }
    // }
    
    // for(int i=0;i<size;i++){
    //     if(arr[i]<minimum){
    //         minimum=arr[i];
    //     }
    // }
    
    // for (int i=0;i<size;i++){
    //     if(arr[i]>maximum){
    //         maximum=arr[i];
    //     }
    //     if(arr[i]<minimum){
    //         minimum=arr[i];
    //     }
        
    // }
    
    int maximum=*max_element(arr,arr+size); 
    int minimum=*min_element(arr,arr+size); 
    
    return maximum-minimum;
}

int main() {
    int arr[]={80,40,30,20,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    cout <<function (arr,size)<<endl;

    return 0;
}