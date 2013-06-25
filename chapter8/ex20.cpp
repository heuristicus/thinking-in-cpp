#include <string>
#include <iostream>
#include <cstring>

using namespace std;

class myString
{
public:
    string str;
    myString(string s);
    ~myString();
};

class StringStack {
    static const int size = 100;
    const myString* stack[size];
    int index;
public:
    StringStack();
    void push(const myString* s);
    const myString* pop();
};

myString::myString(string s)
{
    str = s;
}

myString::~myString(){}

StringStack::StringStack() : index(0) {
    memset(stack, 0, size * sizeof(string*));
}

void StringStack::push(const myString* s) {
    if(index < size)
	stack[index++] = s;
}

const myString* StringStack::pop() {
    if(index > 0) {
	const myString* rv = stack[--index];
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
    myString* ms;
    for(int i = 0; i < iCsz; i++){
	ms = new myString(iceCream[i]);
	ss.push(ms);
    }
    const myString* cp;
    while((cp = ss.pop()) != 0)
	cout << cp->str << endl;
}
