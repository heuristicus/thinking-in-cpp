#include <iostream>
#include <string>

using namespace std;

void f1(string* str)
{
    (*str).erase(8);
}

void f2(string& str)
{
    str[4] = 'b';
}

int main(int argc, char *argv[])
{
    string test("Hello testing");
    cout << test << endl;
    f1(&test);
    cout << test << endl;
    f2(test);
    cout << test << endl;
    
    return 0;
}
