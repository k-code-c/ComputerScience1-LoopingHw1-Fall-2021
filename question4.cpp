#include <iostream>
#include <fstream>
#include <istream>

using std::endl;
using std::cout;
using std::ifstream;
using namespace std;


 int main(int argc, char const**argv) {
    int even{}; // even numberds in file
    int odd{}; // odd numbers in file
    int theValue = 8;
    int remain = theValue % 3;
    
   
    // this has all the numbers
    ifstream theNumbers("/Users/kcashiogwu/Downloads/loopingHomework1 3/data.txt");
    // while the number files is read, it will indicate which numbers are odd or even.
    
    
    
    while (theNumbers) {
        theNumbers >> theValue;
        if (theValue % 2 == 0) {
        even = even + 1;
}
        else {
            odd = odd + 1;
        }
    }
    
    
    
        
    cout << "The even numbers read: " << even << endl;
        
    cout << "The odd numbers read: " << odd << endl;
    
    
     return EXIT_SUCCESS;
     
 }

