#include <iostream>

using namespace std;

void f(float fl)
{
    const float& a = fl;
    
    float b = a * 10;
    
    cout << a << ", " << b << endl;
}

int main(int argc, char *argv[])
{
    f(10);
    
    return 0;
}
