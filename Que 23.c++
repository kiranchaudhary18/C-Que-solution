// first approach

// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

string function(string str1,string str2){
    for(int i=0;i<str2.length();i++){
        str1+=str2[i];
        
    }
    return str1;
}
int main() {
    string str1="hello ";
    string str2="world ";
    
    cout << function(str1,str2);
    return 0;
}


// second approach

// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

string function(string str1,string str2){
   return str1+str2;
}
int main() {
    string str1="hello ";
    string str2="world ";
    
    cout << function(str1,str2);
    return 0;
}


// third approach

// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

string function(string str1,string str2){
   str1.append(str2);
   return str1;
}
int main() {
    string str1="hello ";
    string str2="world ";
    
    cout << function(str1,str2);
    return 0;
}



// fourth approach

// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>

using namespace std;

void function(char* str1,const char* str2){
  strcat(str1,str2);
}
int main() {
    char str1[50]="hello ";
    const char* str2="world ";
    
     function(str1,str2);
     
     cout <<str1;
    return 0;
}