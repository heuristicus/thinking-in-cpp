#include <iostream>

using namespace std;

int f(int* arr = 0)
{
    static int* ptr;

    if (arr != 0)
	ptr = arr;
    else if (*ptr == -1)
	return -1;
    else
	return *(ptr++);
}

int main(int argc, char *argv[])
{
    int data[] = {1,2,3,4,5,6,7,8,9, -1};
    f(data);
    int a;
    while((a = f()) != -1)
	cout << a << endl;
    return 0;
}
