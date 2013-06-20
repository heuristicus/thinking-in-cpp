#include <iostream>

using namespace std;

struct one;
struct two;
struct three;

class three
{
public:
    void f3(one*, int);
};

class one
{
public:
    void print();
    friend two;
    friend void three::f3(one*, int);
private:
    int a;
    int b;
};

class two
{
public:
    void f2(one*, int);
};

void three::f3(one* ett, int set)
{
    ett->a = set;
}

void two::f2(one* ett, int set)
{
    ett->b = set;
}

void one::print()
{
    cout << "a is " << a << ", b is " << b << endl;
}

int main(int argc, char *argv[])
{
    one a;
    two b;
    three c;
    
    c.f3(&a, 10);
    b.f2(&a, 20);
    
    a.print();

    return 0;
}
