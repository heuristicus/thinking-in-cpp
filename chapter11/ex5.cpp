#include <iostream>

using namespace std;

class tc
{
public:
    tc(){};
    virtual ~tc(){};
    void p1() const { cout << "p1" << endl; };
    void p2(){ cout << "p2" << endl; };
    void p3() const { cout << "p3" << endl; };
};

const tc& f(const tc* a)
{
    a->p1();
    //a->p2(); // Can't call non-const
    a->p3();
    return *a;
}

int main(int argc, char *argv[])
{
    
    return 0;
}
