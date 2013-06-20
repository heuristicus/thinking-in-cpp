#include <iostream>

using namespace std;

struct bclass;
struct aclass;

class aclass
{
public:
    int a;
    void fa(bclass*, int);
};

class bclass
{
public:
    int b;
    void fb(aclass*, int);
};

void aclass::fa(bclass* b, int set)
{
    b->b = set;
}

void bclass::fb(aclass* a, int set)
{
    a->a = set;
}

int main(int argc, char *argv[])
{

    aclass a;
    bclass b;
    
    a.fa(&b, 10);
    b.fb(&a, 20);

    cout << "a is " << a.a << ", b is " << b.b << endl;
    
    return 0;
}
