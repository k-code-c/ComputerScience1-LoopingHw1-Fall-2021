#include <iostream>
#include <fstream>
#include <istream>



using namespace :: std;
using std :: endl;
using std :: cout;



int main() {
    
    
    double sum{};
    double value {};
    double average;
    int theInput;
    double average2;
    int total;
    
    
    // this is for question
    
    //this is to effectivly add the numbers
    cout << ("Enter -99, once you enter all your integer values") << "\n";
    
    cout << ("Enter integer values: ");
    
    
    //this will prevent -99 from being added to the sum and the average
    while (theInput != -99)
    {
        cin >> theInput;
        if (theInput != -99){
            sum += theInput;
            // traced within the while loop that tells me how many numbers i've inputed minus 1
        }
        cout << "You inputed: " << theInput << endl;
        
    }
    // this will help with the average
    cout << "How Many numbers did you input, except -99: ";
    
    cin >> total;
    //this will find the sum
    cout << ("the sum of these values are: ");
    
    
    cout << sum << "\n";
    
    
    cout << "The Average for all your numbers are: ";
    //equation for the average
        average = sum / total;
        
    cout << average << "\n" << endl;
    
    
    return 0;
}


