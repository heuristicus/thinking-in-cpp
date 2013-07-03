#include "ex16-2.h"
#include <iostream>

using namespace std;

namespace ln = longname;

void ln::f1(){ cout << "f1" << endl; }
void ln::f2(){ cout << "f2" << endl; }
void ln::f3(){ cout << "f3" << endl; }
void ln::f4(){ cout << "f4" << endl; }
void ln::f5(){ cout << "f5" << endl; }

void heref()
{
    ln::f1();
}

void heref2()
{
    using namespace ln;
    f3();
}

int main(int argc, char *argv[])
{
    heref();
    heref2();
    return 0;
}
