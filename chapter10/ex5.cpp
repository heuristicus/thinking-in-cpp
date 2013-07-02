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

void logIncident()
{
//    static monitor m1;
    monitor m1;
     static monitor2 m(&m1);
}

int main(int argc, char *argv[])
{
    logIncident();
    return 0;
}
