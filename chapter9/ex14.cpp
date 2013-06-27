#include <iostream>

using namespace std;

class A
{
public:
    A(){ cout << "Object A created" << endl; };
    virtual ~A(){};
};

class B
{
public:
    A val;
    B(){};
    virtual ~B(){};
};

int main(int argc, char *argv[])
{
    B arr[10];
        
    return 0;
}
