#include <iostream>

using namespace std;

int& f(int* a)
{
    *a = *a - 10;
    return *a;
}

int main(int argc, char *argv[])
{
    int* b;
    *b = 33;
        
    cout << f(b) << endl;
    
    return 0;
}
