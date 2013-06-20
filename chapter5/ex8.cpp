#include <iostream>

using namespace std;

class data
{
public:
    int a;
    void showMap();
private:
    double c;
public:
    float b;
protected:
    double f;
private:
    float d;
protected:
    long e;
};

void data::showMap()
{
    cout << "public int a: " << &a << endl
	 << "private double c: " << &c << endl
	 << "public float b: " << &b << endl
	 << "private float d: " << &d << endl
	 << "protected double f: " << &f << endl
	 << "protected long e: " << &e << endl; 
}

int main(int argc, char *argv[])
{
    data d;
    d.showMap();
    
    return 0;
}
