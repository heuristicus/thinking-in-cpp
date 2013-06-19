#include <iostream>

using namespace std;

struct fstr 
{
    void f1();
};

struct dta
{
    long value;
};

struct dtafn
{
    long value;
    void f2();
};

void fstr::f1()
{
    cout << "f1()" << endl;
}

void dtafn::f2()
{
    cout << "f2()" << endl;
}

int main(int argc, char *argv[])
{
    cout << "sizeof(fstr): " << sizeof(fstr) << endl;
    cout << "sizeof(dta): " << sizeof(dta) << endl;
    cout << "sizeof(dtafn): " << sizeof(dta) << endl;

    return 0;
}
