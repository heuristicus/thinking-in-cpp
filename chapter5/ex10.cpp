#include <iostream>
#include "stash.h"

using namespace std;

class hen
{
public:
    void display();
    struct nest;
    class nest
    {
    public:
	void display();
	struct egg;
	class egg
	{
	public:
	    void display();
	} e;
    } n;
};

void hen::display()
{
    cout << "I am a hen" << endl;
    n.display();
}

void hen::nest::display()
{
    cout << "I am a nest" << endl;
    e.display();
}

void hen::nest::egg::display()
{
    cout << "I am an egg" << endl;
}


int main(int argc, char *argv[])
{
    Stash s;
    s.initialize(sizeof(hen));
    
    for (int i = 0; i < 5; ++i)
    {
	s.add(new hen);
    }

    for (int i = 0; i < 5; ++i)
    {
	((hen*)s.fetch(i))->display();
    }

    return 0;
}
