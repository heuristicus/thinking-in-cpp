#include <iostream>

using namespace std;

class cont
{
public:
    cont(int ii) : i(ii){};
    virtual ~cont(){};
    cont operator+(const cont& c){ cout << "operator+" << endl; return cont(i + c.i); };
    cont operator-(const cont& c){ cout << "operator-" << endl; return cont(i - c.i); };
    void print(){ cout << "i value: " << i << endl; };
private:
    int i;
};

int main(int argc, char *argv[])
{
    cont a(1);
    cont b(2);
    cont c(5);
    cont d = a + b - c;
    d.print();
    
    return 0;
}
