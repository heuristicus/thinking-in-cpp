#include <iostream>

using namespace std;

// void f(int i, float j)
// {
//     cout << i << ", " << j << endl;
// }

void f(int i, float)
{
    cout << i << endl;
}

int main(int argc, char *argv[])
{
    f(10, 15.3f);
    
    return 0;
}
