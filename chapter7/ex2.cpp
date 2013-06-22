#include <iostream>

using namespace std;

class Message
{
public:
    Message(string s);
    virtual ~Message();
//    void print();
    void print(string append);
private:
    string s;
};

Message::Message(string message){ s = message; }

Message::~Message(){ cout << "Message Destroyed" << endl;}

//void Message::print() { cout << s << endl; }

void Message::print(string append = "")
{
    cout << s << append << endl;
}

int main(int argc, char *argv[])
{
    Message m("I say, FitzRoy.");
    m.print();
    m.print("What is it?");
        
    return 0;
}
