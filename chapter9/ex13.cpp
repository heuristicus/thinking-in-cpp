#include <iostream>

using namespace std;

class fwd
{
public:
    fwd(){}
    virtual ~fwd(){}
    void f1() { cout << "f1" << endl; f2(); }
    void f2() { cout << "f2" << endl; }
};

int main(int argc, char *argv[])
{
    fwd f;
    f.f2();
    f.f1();
    
    return 0;
}
