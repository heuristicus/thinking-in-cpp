#include <iostream>

using namespace std;

union Packed {
    char i;
    short j;
    int k;
    long l;
    float f;
    double d;
};

int main() {
    cout << "sizeof(Packed) = "
	 << sizeof(Packed) << endl;
    Packed x;
    x.d = 231.1;
    cout << "char " << x.i << endl;
    cout << "short " << x.j << endl;
    cout << "int " << x.k << endl;
    cout << "long " << x.l << endl;
    cout << "float " << x.f << endl;
    cout << "double " << x.d << endl;
    
}
