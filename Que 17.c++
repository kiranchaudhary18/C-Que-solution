//  use  3 approach and solve this que  

// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

void function (int arr[],int size){
    int positivecount=0;
    int negativecount=0;
    
//  for(int i=0;i<size;i++){
//      (arr[i]<0) ? positivecount++ :negativecount++;
//  }

// for(int i=0;i<size;i++){
//     if(arr[i]>0){
//         positivecount++;
//     }
// }
// for (int i=0;i<size;i++){
//     if(arr[i]<0){
//         negativecount++;
//     }
// }


for (int i=0;i<size;i++){
    if(arr[i]>0){
        positivecount++;
    }
    else{
        negativecount++;
    }
}

cout <<"positive count:" <<positivecount << endl;
cout <<"negative count:" <<negativecount << endl;
}

int main() {
    
    int arr[]={1,-2,-3,-4,5,-6};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    function(arr,size);
    return 0;
}