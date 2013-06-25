#include <iostream>

using namespace std;

class bird
{
public:
    bird();
    virtual ~bird();
    void fly();
};

class rock
{
public:
    rock();
    virtual ~rock();
};

bird::bird(){}
bird::~bird(){}
rock::rock(){}
rock::~rock(){}

void bird::fly()
{
    cout << "I believe I can fly.";
}

int main(int argc, char *argv[])
{
    rock r;
    void* s = &r;
    bird* b = (bird*)s;
    b->fly();

    return 0;
}
