#include <fstream>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    // Creates a vector container which holds strings. The container can hold any object.
    vector<string> v;
    ifstream in("testfile.txt");
    string line;
    while(getline(in, line))
	// the push_back function is one example of a function which containers implement which
	// allow objects to be put into containers.
	v.push_back(line);
    
    for (int i = 0; i < v.size(); ++i)
	// to access objects inside a container, the standard array access notation is used,
	// via operator overloading.
	cout << i << ": " << v[i] << endl;

    return 0;
}
