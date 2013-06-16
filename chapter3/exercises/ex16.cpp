#include <iostream>

using namespace std;

enum colours { red, green, blue, orange, purple };


int main(int argc, char *argv[])
{
    colours c;
    
    for (int i = red; i < purple; ++i)
    {
	cout << i << endl;
    }
    
    return 0;
}
