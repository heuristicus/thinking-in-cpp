#include <iostream>
#include <fstream>
#include <string>
#include "stack.h"
#include "stash.h"

using namespace std;

struct stashstack 
{
    Stack stashes;
    Stash* lineStash;
    int size;
    void initialise(int elemsize);
    void add(const void* elem);
    void read();
};

void stashstack::initialise(int elemsize)
{
    size = elemsize;
}

void stashstack::add(const void* elem)
{
    if (lineStash->next == 5){
	stashes.push(lineStash);
	lineStash = new Stash;
	lineStash->initialize(size);
    }
    lineStash->add(elem);
}

void stashstack::read()
{
    while((lineStash = (Stash*)stashes.pop())){
	for (int i = 0; i < 5; ++i)
	{
	    cout << i << ": " << (char*)lineStash->fetch(i) << endl;
	}
    }
}

int main(int argc, char *argv[])
{
    stashstack st;
    st.initialise(sizeof(char) * 100);

    ifstream in("stash.cpp");
    string line;
    
    while(getline(in, line)){
	st.add(line.c_str());
    }

    st.read();
        
    return 0;
}
