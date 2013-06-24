#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    long arr[] = {10, 20, 30 ,40};
    const long* l = arr;
    long const* cl = arr;
    
    long arr2[] = {50, 60, 70};
    
    for (int i = 0; i < 4; ++i)
	cout << *l++ << endl;

    for (int i = 0; i < 3; ++i)
	cout << *cl++ << endl;
	
    // *cl = 20;
    // *l = 10;
    
    return 0;
}
