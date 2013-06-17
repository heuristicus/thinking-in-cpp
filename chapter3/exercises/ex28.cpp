#include <iostream>

using namespace std;

void pring(double* arr, int len)
{
    for (int i = 0; i < len; ++i)
	cout << arr[i] << endl;
}

int main(int argc, char *argv[])
{
    double a[10] = {0};
    pring(a, 10);
    
    unsigned char* b = reinterpret_cast<unsigned char*>(a);
    
    for (int i = 0; i < sizeof(double) * 10; ++i)
	b[i] = 1;
    pring(a,10);
    
    
    return 0;
}
