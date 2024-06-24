#include <iostream>
#include <fstream>
#include <istream>

using std::endl;
using std::cout;
using std::ifstream;
using namespace std;


// THIS IS FOR QUESTION NUMBER 1

int main() {
    
    
    int userInput;
    double sum{};
    double value {};
    double average;
  

    average = value;
    
    
    cout << ("Enter the Number of Values you would like to Sum ");
    //this will allow user to input a value
    cin >> userInput;
    cout << "You inputed " << userInput << " for the amount of values" << endl;
    cout << ("Enter values: ");
    
    // this will allow user to put in multiple values
    for (int i = 0; i < userInput; i++) {
        cin >> value;
        sum = sum + value;
    }
    //will show your sum
    cout << ("Your sum is: ");
    cout << sum << endl;
    average = sum / static_cast<double>(userInput);
    //will show your average
    cout << ("Your Average is: ");
    
    cout << average << ("\n");
    //end of code
    
    
    return 0;
}


