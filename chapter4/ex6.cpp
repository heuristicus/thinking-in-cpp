#include <iostream>

using namespace std;

typedef struct 
{
    int value;
    void set(int a);
    void print();
    void setprint(int a);
} truck;

void truck::set(int a)
{
    value = a;
}

void truck::print()
{
    cout << value << endl;
}

void truck::setprint(int a)
{
    this->value = a;
    this->print();
}

int main(int argc, char *argv[])
{
    truck t;
    t.setprint(5);
    
    return 0;
}
