#include <iostream>
#include <string>

using namespace std;

class star
{
public:
    star(string s){ st = s; };
    virtual ~star(){};
    void print() const { cout << st.c_str() << endl; };
private:
    string st;
};

class starlist
{
public:
    starlist(){};
    virtual ~starlist(){};
    static void p1(){
	for (int i = 0; i < sizeof(a)/sizeof(*a); ++i)
	    a[i].print();
    };
    static void p2(){
	for (int i = 0; i < sizeof(b)/sizeof(*b); ++i)
	    b[i].print();

    };
private:
    static const star a[3];
    static star b[2];
};

const star starlist::a[] = { star("hi"), star("bye"), star("why") };
star starlist::b[] = { star("fly"), star("my") };

int main(int argc, char *argv[])
{
    starlist s;
    s.p1();
    s.p2();
    
    return 0;
}
