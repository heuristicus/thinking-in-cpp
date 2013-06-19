#include <iostream>

using namespace std;

struct top
{
    struct bottom
    {
	float value;
	float getval();
    } botstr;
    int value;
    void retrieve();
};

float top::bottom::getval()
{
    return value;
}

void top::retrieve()
{
    cout << "Bottom value: " << botstr.getval() << endl;
}

int main(int argc, char *argv[])
{
    top a;
    a.botstr.value = 50.3f;
    a.value = 10;
    a.retrieve();
    
    return 0;
}
