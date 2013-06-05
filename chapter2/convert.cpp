#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int number;
    cout << "Enter a decimal number." << endl;
    // cin waits for the same kind of input as its argument, taking it from the console.
    // Can also be redirected to take data from elsewhere.
    cin >> number;
    cout << "Value in oct: " << oct << number << endl;
    cout << "Value in hex: " << hex << number << endl;
    return 0;
}
