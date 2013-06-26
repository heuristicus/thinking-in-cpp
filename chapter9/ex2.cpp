#include <iostream>

using namespace std;

#define FLOOR(x,b) x >= b ? 0 : 1

int main(int argc, char *argv[])
{
    cout << (FLOOR(10, 2)) << endl; // 0
    cout << (FLOOR(10 - 2, 3 + 1)) << endl; // 0
    cout << (FLOOR(10&1, 10)) << endl; // Should be 0?
    cout << (FLOOR(10, 9&8)) << endl;
    return 0;
}
