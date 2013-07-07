#include <iostream>

using namespace std;

class ptr
{
public:
    ptr(double d){ dp = new double(d); };
    ptr(const ptr& p){ dp = new double(*p.dp); };
    virtual ~ptr(){ cout << "dp value:" << *dp << endl; *dp = -1; delete dp; dp = 0;};
private:
    double* dp;
};

void pf(ptr p){}

int main(int argc, char *argv[])
{
    ptr p(20);
    pf(p);
    return 0;
}
