#include <iostream>

using namespace std;

//#define VT

enum vartype { character,
	       integer,
	       floating_point
};

class SuperVar {
#ifdef VT
    vartype vtype;
#endif
    union { // Anonymous union
	char c;
	int i;
	float f;
    };
public:
    SuperVar(char ch);
    SuperVar(int ii);
    SuperVar(float ff);
    void print(vartype t);
};

SuperVar::SuperVar(char ch) {
#ifdef VT
    vtype = character;
#endif
    c = ch;
}

SuperVar::SuperVar(int ii) {
#ifdef VT
    vtype = integer;
#endif
    i = ii;
}

SuperVar::SuperVar(float ff) {
#ifdef VT
    vtype = floating_point;
#endif
    f = ff;
}

void SuperVar::print(vartype t) {
    switch (t) {
    case character:
	cout << "character: " << c << endl;
	break;
    case integer:
	cout << "integer: " << i << endl;
	break;
    case floating_point:
	cout << "float: " << f << endl;
	break;
    }
}

int main() {
    SuperVar A('c'), B(12), C(1.44F);
    A.print(character);
    B.print(integer);
    C.print(floating_point);
}
