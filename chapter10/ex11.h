#include <iostream>

class intstore
{
public:
    intstore(int ival){ item = ival; };
    virtual ~intstore(){};
    void print(){ std::cout << item << std::endl; };
private:
    int item;
};
