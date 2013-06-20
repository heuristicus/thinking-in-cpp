#include <iostream>

using namespace std;

struct lib
{
    string a, b, c;
};

struct lib
{
    string s[3];
};

int main(int argc, char *argv[])
{
    lib x;
    x.a = "lib a ";
    x.b = " Lib b ";
    x.c = " lib c";

    cout << x.a << x.b << x.c << endl;

    return 0;
}
