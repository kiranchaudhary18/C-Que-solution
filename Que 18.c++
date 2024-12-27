#include <iostream>

using namespace std;

void function(int arr[],int size,int index=0){
    cout <<" [ ";
    
    // for(int i=0;i<size;i++){
    //     if(i%2==0){
    //         cout <<arr[i];
            
    //         if(i<size-2){
    //             cout << ",";
    //         }
    //     }
    // }
    
    // for(int i=0;i<size;i+=2){
    //     cout <<arr[i];
        
    //     if(i<size-2){
    //         cout << ", ";
    //     }
    // }
    
   
    
    
    
    
    cout  << "]" << endl;
}

int main() {
    
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    function(arr,size);

    return 0;
}