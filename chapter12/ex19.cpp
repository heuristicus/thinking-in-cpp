#include <iostream>

using namespace std;


class Fi {
public:
    Fi() { cout << "Fi()" << endl; }
};

class Fee {
public:
    Fee(int) { cout << "Fee(int)" << endl;}
    Fee(const Fi&) { cout << "Fee(const Fi&)" << endl; }
};

int main() {
    Fee fee = 1; // Fee(int)
    Fi fi;
    Fee fum = fi; // Fee(Fi)
}
