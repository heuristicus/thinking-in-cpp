#include <iostream>

using namespace std;

class pc
{
public:
    pc(char cc) : c(cc){};
    virtual ~pc(){};
    friend ostream& operator<<(ostream& os, const pc& obj);
    friend istream& operator>>(istream& os, pc& obj);
private:
    char c;
};

ostream& operator<<(ostream& os, const pc& obj)
{
    os << obj.c;
    return os;
}

istream& operator>>(istream& is, pc& obj)
{
    is >> obj.c;
    return is;
}

int main(int argc, char *argv[])
{
    pc p('f');
    cout << p << endl;
    cin >> p;
    cout << p << endl;
    
    return 0;
}
