#include <iostream>

using namespace std;

class cont
{
    int i;
public:
    cont(int ii) : i(ii){};
    virtual ~cont(){};
    cont operator+(const cont& c) { cout << "operator+" << endl; return cont(i + c.i); };
    cont operator-(const cont& c) { cout << "operator-" << endl; return cont(i - c.i); };
    friend cont& operator++(cont& obj);
    friend const cont operator++(cont& obj, int a);
    friend cont& operator--(cont& obj);
    friend const cont operator--(cont& obj, int a);
    void print(){ cout << "i value: " << i << endl; };
};

cont& operator++(cont& obj) {
    cout << "prefix ++a" << endl;
    obj.i++;
    return obj;
}; // prefix (++a)
const cont operator++(cont& obj, int a){
    cout << "postfix a++" << endl;
    cont before(obj.i);
    obj.i++;
    return before;
}; // postfix (a++)
cont& operator--(cont& obj){
    cout << "prefix --a" << endl;
    obj.i--;
    return obj;
}; // prefix (--a)
const cont operator--(cont& obj, int a){
    cout << "postfix a--" << endl;
    cont before(obj.i);
    obj.i--;
    return before;
}; // postfix (a--)

int main(int argc, char *argv[])
{
    cont a(1);
    cont b(2);
    cont c(5);
    cont d = a + b - c;
    cont e = a - c;
    a.print();
    b.print();
    c.print();
    d.print();
    e.print();

    cont f = a++;
    f.print();
    a.print();
    
    cont g = b--;
    g.print();
    b.print();

    cont h = ++c;
    h.print();
    c.print();
    
    cont i = --d;
    i.print();
    d.print();
	
    return 0;
}
