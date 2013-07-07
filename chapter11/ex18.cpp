#include <iostream>

using namespace std;

class argcon
{
public:
    argcon(){};
    argcon(const argcon& a, int b = 10){ cout << "default: " << b << endl; };
    virtual ~argcon(){};
};

void f(argcon c){};

int main(int argc, char *argv[])
{
    argcon t;
    f(t);
    return 0;
}
