// fist approach
#include <iostream>
#include <cctype> 
using namespace std;


string trimManual(string str) {
    int start = 0, end = str.length() - 1;

    while (start <= end && isspace(str[start])) {
        start++;
    }

 
    while (end >= start && isspace(str[end])) {
        end--;
    }

    
    return str.substr(start, end - start + 1);
}

int main() {
    string input = "   hello   ";
    cout <<"\"" << trimManual(input) << "\"" << endl;
    return 0;
}


// second approach 

#include <iostream>
#include <cctype> 
using namespace std;


string trimUsingErase(string str) {

    str.erase(str.begin(), find_if(str.begin(), str.end(), [](unsigned char ch) { return !isspace(ch); }));


    str.erase(find_if(str.rbegin(), str.rend(), [](unsigned char ch) { return !isspace(ch); }).base(), str.end());

    return str;
}

int main() {
    string input = "   hello   ";
    cout << "\"" << trimUsingErase(input) << "\"" << endl;
    return 0;
}


// third approach 

#include <iostream>
#include <algorithm> 
#include <cctype>    
using namespace std;


string trimUsingSTL(string str) {
    
    auto start = find_if_not(str.begin(), str.end(), [](unsigned char ch) { return isspace(ch); });

    
    auto end = find_if_not(str.rbegin(), str.rend(), [](unsigned char ch) { return isspace(ch); }).base();

    return (start < end ? string(start, end) : ""); 
}

int main() {
    string input = "   hello   ";
    cout << " \"" << trimUsingSTL(input) << "\"" << endl;
    return 0;
}


// fourth approach


#include <iostream>
#include <string>
#include <cctype>


std::string trim(const std::string& str) {
    size_t start = 0;

    while (start < str.length() && std::isspace(str[start])) {
        start++;
    }

    size_t end = str.length();
    
    while (end > start && std::isspace(str[end - 1])) {
        end--;
    }

    
    return str.substr(start, end - start);
}

int main() {
  
    std::string input = "  hello  ";

   
    std::string output = trim(input);

 
   
    std::cout << "Output: \"" << output << "\"" << std::endl;

    return 0;
}
