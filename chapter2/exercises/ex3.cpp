#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    fstream in(argv[1]);
    
    string word;
    int count = 0;
    
    while(in >> word)
	count++;
    
    cout << "Words in the file: "<< count << endl;
    
    return 0;
}
