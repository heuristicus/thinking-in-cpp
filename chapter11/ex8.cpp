#include <iostream>

using namespace std;

void f(char& c){ c++; };

int main(int argc, char *argv[])
{
    char t = 'a';
    cout << t << endl;
    f(t);
    cout << t << endl;
    
    return 0;
}
