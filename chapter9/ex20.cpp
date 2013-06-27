#include <iostream>
#include <fstream>
#include "require.h"

using namespace std;

int main(int argc, char *argv[])
{
    requireArgs(argc, 2);
    char* fname = argv[2];
    int val = atoi(argv[1]);
    require(val >= 5 && val <= 10);
    ifstream in(fname);
    assure(in);
        
    return 0;
}
