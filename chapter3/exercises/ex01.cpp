#include "ex1.h"
#include <iostream>

using namespace std;

void f1(float a, char b, int c)
{
    cout << "f1: float " << a << ", char " << b << ", int " << c << endl;
}

char f2(float a, float b, float c)
{
    cout << "f1: float " << a << ", float " << b << ", float " << c << endl;
    return 'a';
}

float f3(int a, int b, int c)
{
    cout << "f1: int " << a << ", int " << b << ", int " << c << endl;
    return 3.14;
}

int f4(char a, float b)
{
    cout << "f1: char " << a << ", float " << b << endl;
    return 3;
}

int main(int argc, char *argv[])
{
    f1(10.0f, 'a', 15);
    f2(1.0f, 3.0f, 5.0f);
    f3(1, 1, 2);
    f4('z', 3.14f);
    return 0;
}
