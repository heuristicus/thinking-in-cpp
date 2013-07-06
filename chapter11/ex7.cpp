#include <iostream>

using namespace std;

void f(int**& t){ t++; };

int main(int argc, char *argv[])
{
    int a = 10;
    int* b = &a;
    int** c = &b;
                
    cout << c << endl;

    f(c);
    
    cout << c << endl;
    
    return 0;
}
