#include <iostream>

using namespace std;

enum dogs { large, small, medium };
union numbers 
{
    int a;
    float b;
    long d;
    double e;
};

int main(int argc, char *argv[])
{
    dogs a;
    numbers b;
    a = small;
    b.b = 25.0f;

    return 0;
}
