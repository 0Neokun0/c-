#include <iostream>
#include <cmath> // use math functions
using namespace std;

int main()
{
    //basic math function
    cout << "2 to the power of 5 is " << pow(2, 5) << endl;
    cout << "Square root of 36 is " << sqrt(36) << endl; // square root
    cout << "Rounding 5.7 is " << round(5.7) << endl; // round to whole number
    cout << "Bigger of the two number from 10 and 5 is " << fmax(5, 10) << endl; // max out of given numbers
    cout << "Minimum of the two number from 10 and 2 is " << fmin(10, 2) << endl; // min number of the give number
    
    return 0;
}