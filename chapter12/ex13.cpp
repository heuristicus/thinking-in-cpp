#include <iostream>

using namespace std;

class ptr
{
public:
    ptr(int i) : ip(&i){};
    ptr(const ptr& p) : ip(new int(*p.ip))
    {
	cout << "copy constructor" << endl;
	
    }
    virtual ~ptr(){};
    friend ostream& operator<<(ostream& os, const ptr& obj);
    ptr& operator=(const ptr& p)
    {
	cout << "operator=" << endl;
	if (&p != this){
	    cout << "not equivalent" << endl;
	    ip = new int(*p.ip);
	} else {
	    cout << "equivalent" << endl;
	}

	return *this;
    }
    int* getptr(){ return ip; };
private:
    int* ip;
};

ostream& operator<<(ostream& os, const ptr& obj)
{
    os << obj.ip;
    return os;
}

int main(int argc, char *argv[])
{
    ptr a(10);
    cout << a << endl;
    ptr b(20);
    cout << b << endl;
    a = a;
    b = a;
    ptr c = b;
    cout << "b" << endl;
    cout << b << endl;
    cout << *(b.getptr()) << endl;

    cout << "c" << endl;
    cout << c << endl;
    cout << *(c.getptr()) << endl;
    
    return 0;
}
