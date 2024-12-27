// first approach 

#include <iostream>
#include <cstring> 
using namespace std;


void splitManualArray(string str) {
    int start = 0; 
    int length = str.length();

   
    for (int i = 0; i < length; i++) {
       
        if (str[i] == ' ' || ispunct(str[i])) {
           
            if (i > start) {
                cout << str.substr(start, i - start) << " ";
            }
            start = i + 1; 
        }
    }

   
    if (start < length) {
        cout << str.substr(start) << endl;
    }
}

int main() {
    string inputString = "Hello world, welcome to JavaScript!";
    cout << "Words (Manual Array Split): ";
    splitManualArray(inputString);
    return 0;
}


// second approach 

#include <iostream>
#include <sstream> // For stringstream
using namespace std;


void splitUsingStringStream(string str) {
    stringstream ss(str); 
    string word;

    
    while (ss >> word) {
        cout << word << " ";  
    }
    cout << endl;
}

int main() {
    string inputString = "Hello world, welcome to JavaScript!";
    cout << "Words (Using stringstream): ";
    splitUsingStringStream(inputString);
    return 0;
}


// third approach

#include <iostream>
#include <regex> 
using namespace std;


void splitUsingRegex(string str) {
    regex wordRegex("\\w+");  
    auto wordsBegin = sregex_iterator(str.begin(), str.end(), wordRegex);
    auto wordsEnd = sregex_iterator();

   
    for (auto it = wordsBegin; it != wordsEnd; ++it) {
        cout << it->str() << " ";  
    }
    cout << endl;
}

int main() {
    string inputString = "Hello world, welcome to JavaScript!";
    cout << "Words (Using regex): ";
    splitUsingRegex(inputString);
    return 0;
}


// forth approach

#include <iostream>
#include <sstream>
#include <vector>
#include <string>

std::vector<std::string> splitIntoWords(const std::string& str) {
    std::vector<std::string> words;
    std::istringstream stream(str);
    std::string word;

    
    while (stream >> word) {
        words.push_back(word);
    }

    return words;
}

int main() {
  
    std::string inputString = "Hello world, welcome to JavaScript!";

    
    std::vector<std::string> words = splitIntoWords(inputString);

 
    std::cout << "Words: ";
    for (const auto& word : words) {
        std::cout << "'" << word << "', ";
    }
    std::cout << std::endl;

    return 0;
}
