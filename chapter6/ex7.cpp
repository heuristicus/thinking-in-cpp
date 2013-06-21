#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double a[10] = {1.5, 1.6, 1.7};
    double b[] = {1, 3, 5, 7, 9, 11};
    
    for (int i = 0; i < sizeof(a)/sizeof(*a); ++i)
    {
	cout << i << "(a) is " << a[i] << endl;
    }

    for (int i = 0; i < sizeof(b)/sizeof(*b); ++i)
    {
	cout << i << "(b) is " << b[i] << endl;
    }

    return 0;
}
