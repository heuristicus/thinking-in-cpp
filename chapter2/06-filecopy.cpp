#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream in("testfile.txt");
    ofstream out("outfile.txt");

    string s;
    // Getline reads a single line from the input, reading characters until a 
    // termination character is reached. The termination character is not put
    // into the resulting string, so the terminator must be added if you need it.
    while(getline(in, s))
	out << s << "\n";
    return 0;
}
