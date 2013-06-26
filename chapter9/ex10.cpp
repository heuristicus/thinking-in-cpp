#include <iostream>

using namespace std;

enum Hue { red, blue, yellow };

class colour
{
public:
    colour(Hue hu){ h = hu; };
    virtual ~colour(){};
    void setHue(Hue hu){ h = hu; };
    Hue getHue(){ return h; };
private:
    Hue h;
};


int main(int argc, char *argv[])
{
    Hue h = red;
    colour c(h);
    return 0;
}
