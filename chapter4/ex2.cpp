#include <iostream>
    
using namespace std;

typedef struct
{
    int b;
    void init(int c);
} a;


void a::init(int c)
{
    b = c;
}


int main(int argc, char *argv[])
{
    a test;
    test.init(5);
    cout << test.b << endl;
    
    return 0;
}
