#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    if (1 and 2)
	cout << "and trigraph works" << endl;
    if (1 or 2)
	cout << "or trigraph works" << endl;
    if (not 0)
	cout << "not trigraph works" << endl;
    if (1 not_eq 2)
	cout << "not_eq trigraph works" << endl;
    
    return 0;
}
