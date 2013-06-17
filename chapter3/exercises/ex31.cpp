#include <iostream>

using namespace std;

#ifdef DEBUG

#define P(A) cout << #A << ": " << (A) << endl;

#else

#define P(A)

#endif

int main() {
    int a = 1, b = 2, c = 3;
    P(a); P(b); P(c);
    P(a + b);
    ((c - a)/b);
}
