#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const double a[10] = {0};
    volatile double b[10];
    
    for (int i = 0; i < 10; ++i)
    {
	double* c = const_cast<double*>(&a[i]);
	*c = i;
	double* d = const_cast<double*>(&b[i]);
	*d = i;
    }

    for (int i = 0; i < 10; ++i){
	cout << a[i] << endl;
	cout << b[i] << endl;
    }
    
    return 0;
}
