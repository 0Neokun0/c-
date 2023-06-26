#include <iostream>
using namespace std;

int main()
{
    string phrase = "c++ is cousin to c or maybe not";
    cout << phrase.length() << endl;
    cout << phrase[0];
    cout << phrase.find("maybe", 0);
    cout << phrase.substr(8, 3); // starting index, and the number of character needed to show

    return 0;
}