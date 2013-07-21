#include <iostream>

using namespace std;

class t
{
public:
    t(){};
    virtual ~t(){};
    friend t& operator=(const t& tt);
};

t& operator=(const t& tt)
{
    cout << "operator=" << endl;
}

int main(int argc, char *argv[])
{
    
    return 0;
}
