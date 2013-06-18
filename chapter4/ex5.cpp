#include <iostream>

using namespace std;

typedef struct 
{
    int value;
    void set(int a);
    void print();
} truck;

void truck::set(int a)
{
    value = a;
}

void truck::print()
{
    cout << value << endl;
}

int main(int argc, char *argv[])
{
    truck t;
    t.set(5);
    t.print();
    
    return 0;
}
