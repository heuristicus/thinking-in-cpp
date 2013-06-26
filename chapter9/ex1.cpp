#include <iostream>

using namespace std;

//#define F (x) (x + 1) // causes wrong expansion
#define F(x) (x + 1)

int main(int argc, char *argv[])
{
    cout << F(1) << endl;
    
    return 0;
}
