#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < 10; ++i)
    {
	cout << "Loop 1" << endl;
    }

    for (int i = 0; i < 10; ++i)
    {
	cout << "Loop 2" << endl;
    }

    return 0;
}
