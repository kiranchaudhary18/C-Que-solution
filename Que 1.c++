// 1. Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F


// first approach:

     #include <iostream>
     #include <string>

         using namespace std;

         string checkGrade(int score){
        if(score>=90 && score<=100){
            return "A";
        }else if (score >=80 && score <=89){
             return "B";
        }else if (score >=70 && score <=79){
            return "C";
        }
         else if (score >=60 && score <=69){
            return "D";
        }else if (score >=0 && score <=59){
            return "Fail";
        }
        return 0;
    
        }


        int main() {
          int score ;
          cout <<"Enter the score :";
          cin >> score;
     
          string grade=checkGrade(score);
          cout << "The student grade is:"<<grade<<std::endl;
         return 0;
          
          }


//second approach:

// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

void function(){
    int score ;
    if(score >=90 && score <=100){
        cout <<"A";
    }
     else if(score >=80 && score <=89){
        cout << "B";
    }
     else if(score >=70 && score <=79){
        cout << "C";
    }
     else if(score >=60 && score <=69){
      cout << "D";
    }
    else {
        cout << "F";
    }
    
    
}
int main() {
    
int score ;
cout << "enter your score:";
cin>> score;

function();
    return 0;
}


// third approach

// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

string checkgrade(int score){
    switch (score /10){
        case 10:
        
        case 9:
          return "A";
        case 8:
          return "B";
        case 7:
          return "C";
        case 6:
          return "D";
        default :
        if(score >=0 && score <=60){
            return "FAIL";
        }
        else {
            return "X";
        }
    }
    
}

int main() {
    int score ;
    cout << "enter your score :";
    cin >> score;
    
    string grade=checkgrade(score);
    
    cout << grade;
    return 0;
}

          

