#include <iostream>

using namespace std;

class libc
{
public:
    string geta();
    string getb();
    string getc();
    void seta(string s);
    void setb(string s);
    void setc(string s);
private:
    string a,b,c;
//    string s[3];
};

string libc::geta()
{
    return a;
}

string libc::getb()
{
    return b;
}

string libc::getc()
{
    return c;
}

void libc::seta(string s)
{
    a = s;
}

void libc::setb(string s)
{
    b = s;
}

void libc::setc(string s)
{
    c = s;
}

int main(int argc, char *argv[])
{
    libc x;
    x.seta("lib a ");
    x.setb(" Lib b ");
    x.setc(" lib c");

    cout << x.geta() << x.getb() << x.getc() << endl;

    return 0;
}
