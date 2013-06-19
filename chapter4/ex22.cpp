#include <iostream>
#include <fstream>
#include <string>
#include "stack.h"
#include "stash.h"

using namespace std;

int main(int argc, char *argv[])
{
    Stack stashes;
    stashes.initialize();
    
    Stash* lineStash = new Stash;
    lineStash->initialize(sizeof(char) * 100);
    
    ifstream in("stash.cpp");
    string line;
    
    while(getline(in, line)){
	if (lineStash->next == 5){
	    stashes.push(lineStash);
	    lineStash = new Stash;
	    lineStash->initialize(sizeof(char) * 100);
	}
	lineStash->add(line.c_str());
    }

    while((lineStash = (Stash*)stashes.pop())){
	for (int i = 0; i < 5; ++i)
	{
	    cout << i << ": " << (char*)lineStash->fetch(i) << endl;
	}

    }
        
    return 0;
}
