// first approach 


#include <iostream>

using namespace std;

int Length(string str){
  int count =0;
  for(int i=0;str[i]!='\0';i++){
      count++;
  }
  return  count;
}

int main() {
  string name="how are you";
  cout << Length(name);
    return 0;
}




// second approach


#include <iostream>

using namespace std;

int Length(string str){
  
  return str.length();
  }
  


int main() {
  string name="how are you";
  cout << Length(name);
    return 0;
}




// third approach


#include <iostream>

using namespace std;

int Length(string str){
    
    const char*ptr=str.c_str();
    int count=0;
    
    while(*ptr!='\0'){
        count++;
        ptr++;
    }
    return count;
}
int main() {
  string name="how are you";
  cout << Length(name);
    return 0;
}




// fourth approach

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int length(string str){
    return distance(str.begin(),str.end());
}
int main() {
    string input="what is this";
    cout <<length(input);
    return 0;
}