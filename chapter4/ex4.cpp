#include <iostream>

using namespace std;

typedef struct 
{
    int value;
} truck;

void set(truck t, int a)
{
    t.value = a;
}

void print(truck t)
{
    cout << t.value << endl;
}

int main(int argc, char *argv[])
{
    truck t;
    set(t, 5);
    print(t);
    
    return 0;
}
