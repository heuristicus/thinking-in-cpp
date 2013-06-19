#include <iostream>

using namespace std;

char* cp(char* arr)
{
    int len = 0;
    while(arr[len] != '\0')
	len++;
    cout << len << endl;
    char* n = new char[len];
    for (int i = 0; i < len; ++i)
	n[i] = arr[i];
    return n;
}

int main(int argc, char *argv[])
{
    char* test = "Hello, this is a character array";
    char* r1 = cp(test);
    char* r2 = cp(r1);

    cout << test << endl;
    cout << r1 << endl;
    cout << r2 << endl;

    cout << "test: " << &test << endl;
    cout << "r1: " << &r1 << endl;
    cout << "r2: " << &r2 << endl;
    
    return 0;
}
