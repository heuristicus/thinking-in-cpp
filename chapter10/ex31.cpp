#include <iostream>

using namespace std;

class printer
{
public:
    static printer* instance(){ return &p; };
    int getIP(){ return ip; };
private:
    static printer p;
    int ip;
    printer(int i) : ip(i){};
    printer(const printer&){};
    virtual ~printer(){};
};

printer printer::p(1023133);

int main(int argc, char *argv[])
{
    printer* pp = printer::instance();
    cout << pp->getIP() << endl;
    
    return 0;
}
