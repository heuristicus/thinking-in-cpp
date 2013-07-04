#include <iostream>

using namespace std;

class ynt
{
public:
    ynt(int v) { val = v; };
    virtual ~ynt(){};
    void print(){ cout << val << endl;};
private:
    int val;
};

class synt
{
public:
    synt(){};
    virtual ~synt(){};
    static void print(){ y.print(); };
private:
    static ynt y;
};

ynt synt::y(5);

int main(int argc, char *argv[])
{
    synt s;
    s.print();
    return 0;
}
