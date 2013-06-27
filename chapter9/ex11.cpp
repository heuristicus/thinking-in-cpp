#include <iostream>

using namespace std;

enum Hue { red, blue, yellow };

class colour
{
public:
    colour(Hue hu){ h = hu; };
    virtual ~colour(){};
    void hue(Hue hu){ h = hu; };
    Hue hue() const { return h; };
private:
    Hue h;
};


int main(int argc, char *argv[])
{
    Hue h = red;
    colour c(h);
    c.hue(yellow);
    cout << c.hue() << endl;
    
    return 0;
}
