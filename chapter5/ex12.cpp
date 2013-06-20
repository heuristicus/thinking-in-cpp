#include <iostream>
#include "stack.h"

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
    Stack s;
    s.initialize();
    
    for (int i = 0; i < 3; ++i)
    {
	s.push(new hen);
    }
    
    hen* h;
    while((h = (hen*)s.pop()))
    {
	h->display();
    }

    return 0;
}
