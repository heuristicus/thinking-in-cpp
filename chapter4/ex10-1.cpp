#include <iostream>

using namespace std;

typedef struct 
{
    void f();
} test;

void test::f()
{
    cout << "hello" << endl;
}

int main(int argc, char *argv[])
{
    test a;
    a.f();
    return 0;
}
