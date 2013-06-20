#include <iostream>

using namespace std;

class vann
{
public:
    void f();
    friend void fg(vann*, int, float);
private:
    int x;
    float z;
};

void vann::f()
{
    cout << "x is " << x << ", z is " << z << endl;
}

void fg(vann* v, int a, float b)
{
    v->x = a;
    v->z = b;
}

int main(int argc, char *argv[])
{
    vann v;
    
    fg(&v, 10, 15.0f);
    v.f();
    fg(&v, 1, 1.0f);
    v.f();

    return 0;
}
