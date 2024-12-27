// first approach


#include <iostream>
using namespace std;

string UpperCase(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]>'a' && str[i]<'z'){
            str[i]=str[i]-32;
        }
    }
    return str;
}

int main() {
   string input ="hello";
   cout << UpperCase(input);

    return 0;
}


// second approach


#include <iostream>
using namespace std;

string UpperCase(string str){
    for(int i=0;i<str.length();i++){
        str[i]=toupper(str[i]);
        
    }
    return str;
}

int main() {
   string input ="hello";
   cout << UpperCase(input);

    return 0;
}



// third approach


#include <iostream>
#include <algorithm> 
#include <cctype>    
using namespace std;

string UpperCase(string str){
    transform(str.begin(), str.end(), str.begin(), ::toupper);

        
    return str;
}

int main() {
   string input ="hello";
   cout << UpperCase(input);

    return 0;
}


// fourth approach


#include <iostream>
#include <algorithm> 
#include <cctype>    
using namespace std;

string UpperCase(string str){
     locale loc; // Create a locale object
    transform(str.begin(), str.end(), str.begin(), [&loc](char c) { return toupper(c, loc); });
        
    return str;
}

int main() {
   string input ="hello";
   cout << UpperCase(input);

    return 0;
}
