#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
//    fstream in("testfile.txt");
    string line;
    int wnum;

    while (cin >> line){
	if (line == "sit")
	    wnum = 1;
	if (line == "id")
	    wnum = 2;
	if (line == "lectus")
	    wnum = 3;
	if (line == "nec")
	    wnum = 4;
	if (line == "tristique")
	    break;
	
	switch(wnum){
	case 1: cout << "Sit down!" << endl; break;
	case 2: cout << "Id not id." << endl; break;
	case 3: cout << "Lectus? I think not." << endl; break;
	case 4: cout << "Nectar." << endl; break;
	default: break;
	}
	wnum = 0;
    }

    return 0;
}
