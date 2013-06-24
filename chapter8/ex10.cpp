#include <iostream>

using namespace std;

class test
{
public:
    test();
    test(int);
    virtual ~test();
    void modify(int);
    int read() const;
private:
    int val;
};

test::test(){}
test::test(int i){ val = i;}
test::~test(){}

void test::modify(int i)
{
    val = i;
}

int test::read() const
{
    return val;
}

int main(int argc, char *argv[])
{
    test t(10);
    
    const test* const c = &t;
    
    cout << c->read() << endl;
    c->modify(20);
    cout << c->read() << endl;

    return 0;
}
