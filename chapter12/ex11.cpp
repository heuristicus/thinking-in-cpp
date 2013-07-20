#include <iostream>

using namespace std;

class number
{
public:
    number(double dd) : d(dd) {};
    virtual ~number(){};
    friend const number operator+(number& left, number& right);
    friend const number operator-(number& left, number& right);
    friend const number operator/(number& left, number& right);
    friend const number operator*(number& left, number& right);
    
    //  operator int() const { return (int)d; }; // using this one converts to int for cout
    operator double() const { cout << "Using operator double()" << endl; return d; };
private:
    double d;
};

const number operator+(number& left, number& right)
{
    return number(left.d + right.d);
}
const number operator-(number& left, number& right)
{
    return number(left.d - right.d);
}
const number operator/(number& left, number& right)
{
    return number(left.d/right.d);
}
const number operator*(number& left, number& right)
{
    return number(left.d * right.d);
}


int main(int argc, char *argv[])
{
    number f = 5.131;
    number g = 10.555;
    
    cout << "f: " << f << ", g: " << g << endl;
    cout << "f + g: " << f + g << endl;
    cout << "g - f: " << g - f << endl;
    cout << "g * f: " << g * f << endl;
    cout << "g / f: " << g / f << endl;
    cout << "g * f + g: " << g * f + g << endl;
    
    return 0;
}
