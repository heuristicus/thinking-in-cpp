#include <iostream>

using namespace std;

class intarr
{
    static int sint;
public:
    intarr() : cint(10) { fill(); };
    virtual ~intarr(){};
    static void stprint(){ cout << sint << endl; };
    void print();
    void fill();
private:
    const int cint;
    static const int sz = 100;
    int arr[sz] = {sint};
};

int intarr::sint = 1000;

inline void intarr::print()
{
    for (int i = 0; i < sz; ++i)
	cout << arr[i] << endl;
    stprint();    
}

inline void intarr::fill()
{
    for (int i = 0; i < sz; ++i)
	arr[i] = sint;
}

int main(int argc, char *argv[])
{
    intarr ir;
    ir.print();
    ir.stprint();
    return 0;
}
