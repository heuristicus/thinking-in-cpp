#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    fstream in("testfile.txt");
    string line;
    int tmp;

    while(getline(in, line)){
	cout << line << endl;
	cin.ignore();
    }
	
    return 0;
}
