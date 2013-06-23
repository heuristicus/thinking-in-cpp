#include <iostream>
#include "ex7-stack.h"

using namespace std;

int main(int argc, char *argv[])
{
    string st[] = {"Hello", "goodbye", "bonjour", "au revoir", "hej", "hej da"};
    
    Stack s((void**)st, sizeof(st)/sizeof(*st));

    void* tmp;
    while((tmp = s.pop()))
	cout << (char*)tmp << endl;
    
    return 0;
}
