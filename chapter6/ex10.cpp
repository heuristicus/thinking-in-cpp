#include <iostream>

using namespace std;

class noc
{
public:
    noc(int b);
    int a;
};

noc::noc(int b)
{
    a = b;
}

int main(int argc, char *argv[])
{
    noc b(10);

    return 0;
}
