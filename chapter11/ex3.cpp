#include <iostream>

using namespace std;

class test
{
public:
    test(){};
    virtual ~test(){};
};

int main(int argc, char *argv[])
{
    //int& a; //Must initialise
    test b;
    test c;
    
    test& tp = b;
    tp = c; // shouldn't be allowed?
    
    return 0;
}
