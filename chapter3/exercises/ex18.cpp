#include <iostream>

using namespace std;

void print_arr(int* arr, int len)
{
    for (int i = 0; i < len; ++i)
    {
	cout << arr[i] << endl;
    }
}

int main(int argc, char *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int b[] = {8, 9, 10, 11, 12, 13};
    a[8] = 123;

    print_arr(a, 7);
    print_arr(b, 6);
    
    return 0;
}
