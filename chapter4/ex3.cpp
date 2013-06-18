#include <iostream>
#include "ex3.h"

using namespace std;

void a::init(int c)
{
    b = c;
}

int main(int argc, char *argv[])
{
    a test;
    test.init(5);
    cout << test.b << endl;

    return 0;
}
