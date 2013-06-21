#include <iostream>

using namespace std;

class Simple
{
public:
    Simple();
};

Simple::Simple()
{
    cout << "Simple constructor called" << endl;
}

int main(int argc, char *argv[])
{
    Simple s;
    return 0;
}
