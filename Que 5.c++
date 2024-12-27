// 5. Write a function that checks if a person is eligible to vote. The person is eligible if they are 18 years old or older.




#include <iostream>

using namespace std;

void function(){
    int age;
    if(age<=18){
        cout <<"eligible for vote";
    }else{
        cout <<"not eligible for vote";
    }
}


int main() {
    int age;
    cout <<"enter the age:";
    cin >> age;
    
    
     function();
    return 0;
}