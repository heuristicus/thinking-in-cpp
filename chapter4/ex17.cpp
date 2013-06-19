#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int* i = new int;
    long* l = new long;
    char* c = new char[100];
    float* f = new float[100];
    
    cout << &i << endl;
    cout << &l << endl;
    cout << &c << endl;
    cout << &f << endl;

    delete i;
    delete l;
    delete []c;
    delete []f;
        
    return 0;
}
