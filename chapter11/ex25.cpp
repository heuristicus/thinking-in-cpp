#include <iostream>

using namespace std;

class iarr
{
public:
    iarr(){
	for (int i = 0; i < 100; ++i)
	{
	    ir[i] = 10;
	}
    };
    virtual ~iarr(){};
    int ir[100];
};


int main(int argc, char *argv[])
{
    iarr a;
    int (iarr::*ir)[100] = &iarr::ir;

    for (int i = 0; i < 100; ++i)
    {
	cout << a.ir[i] << endl;
    }    
    
    return 0;
}
