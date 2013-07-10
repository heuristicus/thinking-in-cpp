#include <iostream>

using namespace std;

class simple
{
public:
    simple(){};
    simple(const simple&){ cout << "Simple copy constructor." << endl; };
    virtual ~simple(){};
};

simple func()
{
    cout << "func" << endl;
    simple b;
    return b;
}

void func2(const simple& b){ cout << "func2" << endl; };

int main(int argc, char *argv[])
{
    func2(func());
    return 0;
}
