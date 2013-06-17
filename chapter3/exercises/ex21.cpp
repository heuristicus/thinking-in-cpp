#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string words[10];
    
    for (int i = 0; i < 10; ++i)
	words[i] = "Hello";

    for (int i = 0; i < 10; ++i)
	cout << words[i] << endl;
    
    return 0;
}
