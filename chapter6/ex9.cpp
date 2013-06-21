#include <iostream>
#include "stack.h"

using namespace std;

class Simple
{
public:
    int val;
    Simple(int ival);
    ~Simple();
    void print();
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

void Simple::print()
{
    cout << "Simple object @ " << this << " with value " << val << endl;
}


int main(int argc, char *argv[])
{
    Simple simparr[] = { Simple(1), Simple(2), Simple(3), Simple(4) };

    for (int i = 0; i < sizeof(simparr)/sizeof(*simparr); ++i)
    {
	simparr[i].print();
    }
    
    return 0;
}
