#include "NamespaceMath.h"
#include "NamespaceOverriding2.h"

void s() {
    using namespace Math;
    using namespace Calculation;
// Everything's ok until:
    Math::divide(1, 2); // Ambiguity
}

void s2() {
    using namespace Math;
    using namespace Calculation;
    using Calculation::divide;
    
// Everything's ok until:
    divide(1, 2); // Ambiguity
}

int main() {}
