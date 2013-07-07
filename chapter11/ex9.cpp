#include <iostream>

using namespace std;

class cnst
{
public:
    cnst(){};
    virtual ~cnst(){};
    void c() const { cout << "const" << endl; };
    void c1() {cout << "normal" << endl; };
};

void f(cnst a){
    a.c();
    a.c1(); 
};

void f1(cnst& a){
    a.c();
    a.c1();
};

void f2(const cnst& a){
    a.c();
    //a.c1(); // Must be const with a const reference.
};

int main(int argc, char *argv[])
{
    
    return 0;
}
