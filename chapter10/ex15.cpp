#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    register int i = 0;
    auto int j = 3;
    for (; i < j; ++i)
	cout << "Hi." << endl;
    
    return 0;
}
