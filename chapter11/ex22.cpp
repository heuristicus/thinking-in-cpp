#include <iostream>

using namespace std;

class X
{
public:
    X(){};
    virtual ~X(){};
    X clone() const { X* b = new X; return *b; };
private:
    X(X&e);
};

void func(const X& a)
{
    cout << "func called" << endl;
    
}

int main(int argc, char *argv[])
{
    X a;
    func(a.clone());
    return 0;
}
