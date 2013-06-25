#include <iostream>

using namespace std;

class test
{
    const float t;
public:
    float f;
    test(float a, float b);
    virtual ~test();
    void print();
};

test::test(float a, float b) : t(a)
{
    f = b;
}

test::~test(){}

void test::print()
{
    cout << t << endl;
    cout << f << endl;
}

int main(int argc, char *argv[])
{
    test t(10, 20);
    t.print();
    
    return 0;
}
