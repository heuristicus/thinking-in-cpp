#include <iostream>

using namespace std;

class user
{
public:
    user(){};
    user(user&){ cout << "User copy constructor" << endl; };
    virtual ~user(){};
};


class test
{
public:
    test(){};
    virtual ~test(){};
private:
    user u;
};

void f(test t){
    cout << "function f" << endl;
};


int main(int argc, char *argv[])
{
    test t;
    f(t);
    return 0;
}
