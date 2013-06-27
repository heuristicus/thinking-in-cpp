#include <iostream>

using namespace std;

#define TRACE(s) cerr << #s << endl, s

void f(int i){ cout << "Void func " << i << endl; }

int main(int argc, char *argv[])
{
    for(int i = 0; i < 100; i++)
	TRACE(f(i));
    return 0;
}
