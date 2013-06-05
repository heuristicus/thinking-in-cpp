#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // Empty strings, but the objects are usable.
    string s1, s2;
    
    // Initialisation of string objects can be done in various ways. These two
    // are equivalent.
    string s3 = "Hello there.";
    string s4("Testing the string.");

    // Can initialise an empty string.
    s2 = "Today";
    // Can concatenate strings
    s1 = s3 + " " + s4;
    // Can append stuff to strings
    s1 += " 9 ";
    // Can output strings to cout
    cout << s1 + s2 + "!" << endl;

    return 0;
}
