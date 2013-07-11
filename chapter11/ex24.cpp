#include <iostream>

using namespace std;

class dubbl
{
public:
    dubbl(double d) : dd(d){};
    virtual ~dubbl(){};
    void print() const { cout << "double " << dd << endl; };
    double dd;
};


int main(int argc, char *argv[])
{
    dubbl d(10);
    dubbl* ddp = &d;

    void (dubbl::*pp)() const;
    double dubbl::*dp;
    dp = &dubbl::dd;
    
    pp = &dubbl::print;
    
    (d.*pp)();
    d.*dp = 20;
    (ddp->*pp)();
    ddp->*dp = 50;
    (d.*pp)();
            
    return 0;
}
