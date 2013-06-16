#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x = 1, y = 2, z = 3;
    int a = x + y - 2/2 + z;
    cout << a << endl;
    a = x + (y - 2)/(2 + z);
    cout << a << endl;
    
    return 0;
}
