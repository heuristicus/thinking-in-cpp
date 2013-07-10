#include <iostream>

using namespace std;

class ccp
{
public:
    ccp(){};
    ccp(ccp&){ cout << "Copy constructor called." << endl; };
    virtual ~ccp(){};
};

class ppc
{
public:
    ppc(){};
    virtual ~ppc(){};
private:
    ccp p;
};

void f(ppc b){};


int main(int argc, char *argv[])
{
    ppc b;
    f(b);
    return 0;
}
