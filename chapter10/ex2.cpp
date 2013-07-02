#include <iostream>

using namespace std;

unsigned long int fib(bool reset = 0)
{
    static unsigned long int prev = 0;
    static unsigned long int pprev = 1;
    
    unsigned long int ret = prev + pprev;
    pprev = prev;
    prev = ret;

    return ret;
}

int main(int argc, char *argv[])
{
    for (int i = 0; i < 100; ++i)
	cout << fib() << endl;

    return 0;
}
