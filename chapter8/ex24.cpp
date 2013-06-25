#include <iostream>

using namespace std;

class cnst
{
    int a;
    int b;
public:
    cnst(int aa, int bb);
    virtual ~cnst();
    void pra() const;
    void modb(int nb);
};

cnst::cnst(int aa, int bb)
{
    a = aa;
    b = bb;
}

cnst::~cnst(){}

void cnst::pra() const
{
    cout << a << endl;
    modb(10); // error
}

void cnst::modb(int nb)
{
    b = nb;
}

int main(int argc, char *argv[])
{
    cnst c(10, 12);
    const cnst c2(5, 3);
    
    c2.pra();
//    c2.modb(10); // Breaks 
    
    c.pra();
    c.modb(5);
    

    return 0;
}
