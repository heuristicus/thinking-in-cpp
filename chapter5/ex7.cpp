#include <iostream>

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
	void setnum(int i);
	struct egg;
	friend hen;
	class egg
	{
	public:
	    friend hen;
	    friend nest;
	    void display();
	    void setnum(int i);
	private:
	    int eggnum;
	} e;
    private:
	int nestnum;
    } n;
};

void hen::display()
{
    cout << "I am a hen" << endl;
    cout << "Nest number " << n.nestnum << endl;
    cout << "Egg number " << n.e.eggnum << endl;
    n.display();
}

void hen::nest::display()
{
    cout << "I am a nest" << endl;
    cout << "Nest number " << nestnum << endl;
    cout << "Egg number " << e.eggnum << endl;
    e.display();
}

void hen::nest::egg::display()
{
    cout << "I am an egg" << endl;
    cout << "Egg number " << eggnum << endl;
}

void hen::nest::setnum(int i)
{
    nestnum = i;
}

void hen::nest::egg::setnum(int i)
{
    eggnum = i;
}

int main(int argc, char *argv[])
{
    hen h;
    hen::nest n;
    hen::nest::egg e;
    
    h.n.setnum(1);
    h.n.e.setnum(2);
    

    n.setnum(20);
    n.e.setnum(30);

    e.setnum(10);

    h.display();
    n.display();
    e.display();
    
    return 0;
}
