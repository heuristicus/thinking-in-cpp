#include <iostream>

using namespace std;

class cont
{
    int i;
public:
    cont(int ii) : i(ii){};
    virtual ~cont(){};
    friend cont operator+(const cont& c, const cont& d);
    friend cont operator-(const cont& c, const cont& d);
    friend cont operator-(const cont& c);
    friend cont& operator++(cont& obj);
    friend const cont operator++(cont& obj, int a);
    friend cont& operator--(cont& obj);
    friend const cont operator--(cont& obj, int a);
    friend ostream& operator<<(ostream& os, const cont& obj);
};

cont operator+(const cont& c, const cont& d)
{
    cout << "Operator+" << endl;
    return (c.i + d.i);
}
cont operator-(const cont& c, const cont& d)
{
    cout << "Operator-" << endl;
    return (c.i - d.i);
}
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
ostream& operator<<(ostream& os, const cont& obj)
{
    os << obj.i;
    return os;
}
cont operator-(const cont& c)
{
    cout << "unary -a" << endl;

    return cont(-c.i);
}

int main(int argc, char *argv[])
{
    cont a(1);
    cont b(2);
    cont c(5);
    cont d = a + b - c;
    cont e = a - c;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

    cont f = a++;
    cout << f << endl;
    cout << a << endl;
    
    cont g = b--;
    cout << g << endl;
    cout << b << endl;

    cont h = ++c;
    cout << h << endl;
    cout << c << endl;
    
    cont i = --d;
    cout << i << endl;
    cout << d << endl;

    cont j = -i;
    cont k = -h;
    cout << j << endl;
    cout << k << endl;
    	
    return 0;
}
