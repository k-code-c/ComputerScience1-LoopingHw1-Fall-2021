#include <iostream>
#include <fstream>
#include <istream>

using std::endl;
using std::cout;
using std::ifstream;
using namespace std;



int main()
    {
    
    ifstream theNumbers;
    int number;
    
        //open file
        theNumbers.open("/Users/kcashiogwu/Downloads/loopingHomework1 3/data.txt");
    
        cout << "The first 5 values stored in this file are: ";
        
        //process file
    
    for (int count = 1; count <= 5; count++) {
        theNumbers >> number; // read the next number in the file
        cout << number << endl;
    }
        
        theNumbers.close(); //closes the file
    
        return 0;
}
