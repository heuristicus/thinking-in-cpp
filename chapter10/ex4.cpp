#include <iostream>

using namespace std;

class monitor
{
public:
    monitor(){ incidents = 0; };
    virtual ~monitor(){};
    void incident(){ incidents++; };
    void print(){ cout << incidents << endl; };
private:
    int incidents;
};

void logIncident()
{
    static monitor m;
    m.incident();
    m.print();
}

int main(int argc, char *argv[])
{
    for (int i = 0; i < 10; ++i)
	logIncident();
    
    return 0;
}
