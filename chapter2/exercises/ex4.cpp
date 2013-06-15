#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3){
	cout << "Usage: ex4 filename word" << endl;
    	return 0;
    }

    fstream in(argv[1]);
    string match = argv[2];

    string read;
    int count;
    
    while(in >> read){
	if (read == match)
	    count++;
    }

    cout << "Occurrences of word " << match << ": " << count << endl;

    return 0;
}
