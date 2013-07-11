#include <iostream>

using namespace std;

class cl
{
public:
    cl(){};
    virtual ~cl(){};
private:
    cl(cl&){};
};

void func(cl c){ cout << "func called." << endl; };

int main(int argc, char *argv[])
{
    cl c;
    func(c);
    
    return 0;
}
