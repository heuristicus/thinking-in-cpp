#include <iostream>
#include "ex11-mem.h"

using namespace std;

int main(int argc, char *argv[])
{
    Mem m(10);
    cout << "Pointer size 10: " << m.moved(m.pointer(10)) << endl;
    cout << "Pointer size 13: " << m.moved(m.pointer(13)) << endl;
    cout << "Pointer size 13: " << m.moved(m.pointer(13)) << endl;
    cout << "Pointer size 31: " <<m.moved(m.pointer(31)) << endl;

    return 0;
}
