#include <iostream>
#include "print_binary.h"
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    float a = atof(argv[1]);
    unsigned char* addr = (unsigned char *)&a;
    
    cout << "sizeof(float)=" << sizeof(float) << endl;
    for (int i = 0; i < sizeof(float); ++i){
	cout << "bit " << i << endl;
	print_binary(addr[i]);
	cout << endl;
    }
    

    return 0;
}
