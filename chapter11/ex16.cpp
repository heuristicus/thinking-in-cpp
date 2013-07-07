#include <iostream>

using namespace std;

class coco
{
public:
    coco(){};
    coco(const coco&){ cout << "coco copy constructor" << endl; };
    virtual ~coco(){};
};

void f(coco c){};

coco f1()
{
    coco c;
    return c;
}

int main(int argc, char *argv[])
{
    coco c;
    f(c);
    coco d = f1();
    return 0;
}
