#include <iostream>

using namespace std;

class vol
{
    volatile int v;
public:
    vol(int vv);
    virtual ~vol();
    void modvv(int nv) volatile;
    void modv(int nnv);
};

vol::vol(int vv)
{
    v = vv;
}

vol::~vol(){}

void vol::modvv(int nv) volatile
{
    v = nv;
}

void vol::modv(int nnv)
{
    v = nnv;
}

int main(int argc, char *argv[])
{
    volatile vol v(3);
    vol v1(1);
    
    v.modvv(4);
    v.modv(1);
    
    v1.modvv(10);
    v1.modv(11);

    return 0;
}
