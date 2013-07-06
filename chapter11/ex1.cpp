#include <iostream>

struct bird{};
struct rock{};
    
using namespace std;

int main(int argc, char *argv[])
{
    bird* b;
    rock* r;
    void* v;
    v = r;
    b = v;
    
    return 0;
}
