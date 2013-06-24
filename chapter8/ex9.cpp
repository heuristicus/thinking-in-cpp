#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double arr[] = {1.2, 1.3, 1.4};
    
    double* const a = arr;
    
    cout << *a << endl;
//    cout << a++ << endl;
    *a = 31.3;
    
    cout << *a << endl;

    return 0;
}
