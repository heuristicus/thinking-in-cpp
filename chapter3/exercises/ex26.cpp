#include <iostream>

using namespace std;

void clobber(void* val, int num_bytes, int setval)
{
    for (int i = 0; i < num_bytes; ++i)
	(((int*)val)[i]) = setval;
}

int main(int argc, char *argv[])
{
    int a[10];
    
    void* arr = static_cast<void*>(a);

    clobber(arr, 5, 300);

    for (int i = 0; i < 10; ++i)
	cout << a[i] << endl;
    
    return 0;
}
