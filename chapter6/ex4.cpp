#include <iostream>

using namespace std;

class smp
{
public:
    smp();
    virtual ~smp();
};

smp::smp()
{
    cout << "smp init" << endl;
}

smp::~smp()
{
    cout << "smp dest" << endl;
}

int main(int argc, char *argv[])
{
    for (int i = 0; i < 5; ++i)
    {
	smp a;
	goto end;
    }

end:
    cout << "Finished" << endl;
    return 0;
}
