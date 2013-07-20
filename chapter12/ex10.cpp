#include <iostream>

using namespace std;

class ic
{
public:
    ic(int ii) : i(ii){};
    virtual ~ic(){};
    friend ic operator++(ic& obj, int a);
    friend ic operator--(ic& obj, int a);
private:
    int i;
};

ic operator++(ic& obj, int a)
{
    cout << "++:" << a << endl;
    
    ic before(obj.i);
    obj.i++;
    return before;
}

ic operator--(ic& obj, int a)
{
    cout << "--:" << a << endl;
    ic before(obj.i);
    obj.i--;
    return before;    
}

int main(int argc, char *argv[])
{
    ic b(10);
    b--;
    b++;
    return 0;
}
