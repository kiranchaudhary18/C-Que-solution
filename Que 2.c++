// Que 2:Write a function to determine whether a given number is positive, negative, or zero.

#include <iostream>

using namespace std;

void function(int num){
    
    if(num>0){
        cout << "positive";
    }
    else if(num<0){
        cout << "negative";
    }
    else {
        cout << "zero";
        }
}
int main() {
    int num;
    cout << "enter the num:";
    cin >> num;
    
    function(num);

    return 0;
}


// second approach

// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

string checknumber(int num){
    if(num>0){
        return "positive";
    }
    else if(num<0){
        return "negative";
    }
    else {
        return "zero";
    }
}

int main() {
   
int num;
cin>> num;

cout << checknumber(num);
    return 0;
}


// third approach

// Online C++ compiler to run C++ program online
#include <iostream>
// #include <string>
using namespace std;

void checknumber(int num){
   switch (num){
       case 1:
       cout  << "positive "<< num;
       break;
       
       case -1:
       cout  << "negative"<<num;
       break;
       
       case 0:
       cout <<"zero" <<num;
       break;
       
       default:
       cout  << "unexpected";
   }
}


int main() {
   
int num;
cin>> num;

 checknumber(num);
    return 0;
}