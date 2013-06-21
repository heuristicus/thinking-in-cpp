#include "ex6-handle.h"
#include <iostream>

using namespace std;

// Define Handle's implementation:
struct Handle::Cheshire {
    int i;
};

Handle::Handle() {
    smile = new Cheshire;
    smile->i = 0;
    cout << "Handle init" << endl;
}

Handle::~Handle() {
    delete smile;
    cout << "Handle dest" << endl;
}

int Handle::read() {
    return smile->i;
}

void Handle::change(int x) {
    smile->i = x;
}
