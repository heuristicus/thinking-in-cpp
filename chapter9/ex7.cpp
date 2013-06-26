#include <iostream>
#include <cstring>

using namespace std;

class ac
{
    enum { size = 20 };
    char ca[size];
public:
    ac(char def = ' '){
	for (int i = 0; i < sizeof(ca)/sizeof(*ca); ++i)
	    ca[i] = def;
    }
    virtual ~ac(){}
    void print(){
	for (int i = 0; i < sizeof(ca)/sizeof(*ca); ++i)
	    cout << ca[i] << endl;
    }
    
};

int main(int argc, char *argv[])
{
    ac a('a');
    ac b;
    
    a.print();
    b.print();
    
    return 0;
}
