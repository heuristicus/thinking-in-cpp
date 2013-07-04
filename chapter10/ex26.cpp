#include <iostream>

using namespace std;

class lo
{
public:
    lo(){};
    virtual ~lo(){};
    void print() const { cout << a << " " << b << endl; }
private:
    static double a;
    static long b;
};

double lo::a = 10.123;
long lo::b = 100;

int main(int argc, char *argv[])
{
    lo hi;
    hi.print();
    
    return 0;
}
