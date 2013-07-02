#include <iostream>
#include <cstdlib>

using namespace std;

class dest
{
public:
    dest(){};
    virtual ~dest(){ cout << "Destroyed." << endl; exit(1); };
};

dest d;

int main(int argc, char *argv[])
{
    
    return 0;
}
