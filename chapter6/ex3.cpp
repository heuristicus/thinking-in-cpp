#include <iostream>

using namespace std;

class Simple
{
public:
    int val;
    Simple(int ival);
    ~Simple();
};

Simple::Simple(int ival)
{
    val = ival;
    cout << "Simple constructor called. Value " << val << endl;
}

Simple::~Simple()
{
    cout << "Simple destructor called. Value " << val << endl;
}


int main(int argc, char *argv[])
{
    Simple a(10);
    return 0;
}
