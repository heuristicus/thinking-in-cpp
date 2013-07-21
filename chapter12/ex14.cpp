#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class bird
{
public:
    bird() {
	ostringstream oss;
	oss << "bird #" << id++;
	name = oss.str();
    };
    bird(const bird& b){
    	cout << "copy constructor" << endl;
	name = b.name;
    }
    virtual ~bird(){};
    bird& operator=(const bird& b){
    	cout << "operator=" << endl;
    	if (&b != this){
	    cout << "not equivalent" << endl;
    	    id = b.id;
    	    name = b.name;
    	} else {
	    cout << "equivalent" << endl;
	}
    	return *this;
    }
    friend ostream& operator<<(ostream& os, const bird& b);
private:
    string name;
    static int id;
};

int bird::id = 0;

ostream& operator<<(ostream& os, const bird& b){
    os << b.name;
    return os;
}

int main(int argc, char *argv[])
{
    bird b;
    bird c;
    cout << c << endl;
    cout << b << endl;
    c = b;
    b = b;
    bird d = c;
    
    cout << c << endl;
    cout << d << endl;

    return 0;
}
