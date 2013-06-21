#include <iostream>
#include "stack.h"

using namespace std;

int main(int argc, char *argv[])
{
    string strarr[] = {"hello", "goodbye", "hooke", "eukaryote" };
    Stack str;
    
    for (int i = 0; i < sizeof(strarr)/sizeof(*strarr); ++i)
    {
	cout << strarr[i] << endl;
	str.push((void*)strarr[i].c_str());
    }

    for (int i = 0; i < sizeof(strarr)/sizeof(*strarr); ++i)
    {
	cout << (char*)str.pop() << endl;
    }

    return 0;
}
