#include <iostream>

using namespace std;

class ints
{
public:
    // void disp();
    // void disp(int);
    // void disp(int, int);
    // void disp(int, int, int);
    void disp(int, int, int);
    ints();
    virtual ~ints();
};

ints::ints()
{
    }

ints::~ints()
{
    }

// void ints::disp()
// {
//     cout << "nothing" << endl;
// }

// void ints::disp(int a) 
// {
//     cout << a << endl;
// }

// void ints::disp(int a, int b)
// {
//     cout << a << b << endl;
// }

// void ints::disp(int a, int b, int c)
// {
//     cout << a << b << c << endl;
// };

void ints::disp(int a = 10, int b = 20, int c = 30)
{
    cout << "nothing" << a << b << c << endl;
}

int main(int argc, char *argv[])
{
    ints i;
    i.disp();
    i.disp(10);
    i.disp(10, 20);
    i.disp(10, 20, 30);
    return 0;
}
