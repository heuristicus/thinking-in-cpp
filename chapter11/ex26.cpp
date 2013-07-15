#include <iostream>

using namespace std;

class Simple2 {

public:
    int f(float) const { return 1; }
    int f(int) const { return 2; }
};

int (Simple2::*fp)(float) const;

int (Simple2::*fp2)(float) const = &Simple2::f;
int (Simple2::*fp3)(int) const = &Simple2::f;

int main() {
    fp = &Simple2::f;
    Simple2 s;
        
    cout << "fp: " << (s.*fp)(10) << endl;
    cout << "fp2: " << (s.*fp2)(10) << endl;
    cout << "fp3: " << (s.*fp3)(10) << endl;
}
