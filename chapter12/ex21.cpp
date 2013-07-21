#include <iostream>

using namespace std;

class strt
{
public:
    strt(){};
    virtual ~strt(){};
    strt& operator=(const strt& s, string ss = "op=call"){
	
    }
};

int main(int argc, char *argv[])
{
    strt a;
    strt b;
    a = b;
    
    return 0;
}
