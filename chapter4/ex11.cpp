#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
#ifdef DEBUG
    cout << "Debug on" << endl;
#endif

    cout << "Hello there." << endl;
    
    return 0;
}
