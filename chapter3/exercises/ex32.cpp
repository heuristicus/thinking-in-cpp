#include <iostream>

using namespace std;

int func(double a)
{
    return (int)a * 10;
}

int main(int argc, char *argv[])
{
    int (*ptr)(double) = func;
    
    cout << ptr(40) << endl;
}
