#include <iostream>

using namespace std;

typedef struct 
{
    string a;
    string b;
    int c;
} strs;

int main(int argc, char *argv[])
{
    strs test;
    test.a = "hello";
    test.b = "goodbye";
    test.c = 1;
    
    cout << test.a << test.b << test.c << endl;
    
    strs* testptr = &test;
    
    testptr->a = "farewell";
    testptr->b = "adieu";
    testptr->c = 2;
    
    cout << testptr->a << testptr->b << testptr->c << endl;

    return 0;
}
