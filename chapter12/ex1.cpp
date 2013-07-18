#include <iostream>

using namespace std;

class over
{
public:
    over(){};
    virtual ~over(){};
    const over& operator++ (int i) {cout << "hello from space" << endl; };
//    const over& operator++ () {cout << "hello from space2" << endl; }; // error on ++a without this
};

int main(int argc, char *argv[])
{
    over a;
    a++;
    ++a;
    return 0;
}
