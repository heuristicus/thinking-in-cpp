#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // dec, oct, hex modify the state of the stream. Called manipulators.
    cout << "Decimal: " << dec << 10 << endl;
    cout << "Octal: " << oct << 10 << endl;
    cout << "Hex: " << hex << 10 << endl;
    return 0;
}
