#include <iostream>
#include "ex22.h"
#include "ex22-2.h"

using namespace std;
// using namespace ns1;
// using namespace ns2;

void f()
{
    using namespace ns1;
    using namespace ns2;
    using ns1::classy;
    
    classy c(10);
    classy d(5);
    c.print();
    d.print();
}

int main(int argc, char *argv[])
{
    f();
    return 0;
}
