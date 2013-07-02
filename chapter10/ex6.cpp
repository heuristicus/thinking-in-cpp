#include <iostream>

using namespace std;

class monitor
{
public:
    monitor(){ incidents = 0; };
    virtual ~monitor(){};
    void incident(){ incidents++; };
    void resolve(){ incidents--; };
    void print(){ cout << incidents << endl; };
private:
    int incidents;
};

class monitor2
{
public:
    monitor2(monitor* m){ mp = m; mp->incident(); mp->print(); };
    virtual ~monitor2(){ mp->resolve(); mp->print(); };
private:
    monitor* mp;
};

monitor m1;
monitor2 m2(&m1);

int main(int argc, char *argv[])
{
    return 0;
}
