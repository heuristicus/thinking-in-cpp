#include <iostream>

using namespace std;

void f()
{
    struct st
    {
    public:
	st(){ v = 0; };
	void print(){ cout << v << endl; };
    private:
	int v;
    };
    
    st a[10];
    for (int i = 0; i < 10; ++i)
	a[i].print();
}

int main(int argc, char *argv[])
{
    f();
    
    return 0;
}
