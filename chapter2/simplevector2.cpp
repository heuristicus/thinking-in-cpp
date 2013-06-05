#include <fstream>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    // Creates a vector container which holds strings. The container can hold any object.
    vector<string> words;
    ifstream in("testfile.txt");
    string word;
    while(in >> word)
	// the push_back function is one example of a function which containers implement which
	// allow objects to be put into containers.
	words.push_back(word);
    
    for (int i = 0; i < words.size(); ++i)
	// to access objects inside a container, the standard array access notation is used,
	// via operator overloading.
	cout << i << ": " << words[i] << endl;

    return 0;
}
