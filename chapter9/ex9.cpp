#include <cstring>
#include <string>
#include <iostream>

using namespace std;

class StringStack {
    static const int size = 100;
    const string* stack[size];
    int index;
public:
    StringStack(){memset(stack, 0, size * sizeof(string*));};
    void push(const string* s);
    const string* pop();
};

inline void StringStack::push(const string* s) {
    if(index < size)
	stack[index++] = s;
}

inline const string* StringStack::pop() {
    if(index > 0) {
	const string* rv = stack[--index];
	stack[index] = 0;
	return rv;
    }
    return 0;
}

string iceCream[] = {
    "pralines & cream",
    "fudge ripple",
    "jamocha almond fudge",
    "wild mountain blackberry",
    "raspberry sorbet",
    "lemon swirl",
    "rocky road",
    "deep chocolate fudge"
};

const int iCsz = sizeof(iceCream) / sizeof(*iceCream);
int main() {
    StringStack ss;
    for(int i = 0; i < iCsz; i++)
	ss.push(&iceCream[i]);
    const string* cp;
    while((cp = ss.pop()) != 0)
	cout << *cp << endl;
}
