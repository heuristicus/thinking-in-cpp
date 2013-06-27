#include "ex12.h"
#include <iostream>

using namespace std;

int main() {
    Time start;
    string s;
    std::getline(std::cin, s);
    Time end;
    cout << endl;
    cout << "start = " << start.ascii();
    cout << "end = " << end.ascii();
    cout << "delta = " << end.delta(&start) << endl;
}
