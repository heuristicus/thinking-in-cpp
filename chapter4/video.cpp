#include "video.h"
#include <string>
#include <iostream>

using namespace std;

string video::get_name()
{
    return name;
}

float video::get_price()
{
    return price;
}

void video::set_price(float new_price)
{
    price = new_price;
}

void video::set_name(string new_name)
{
    name = new_name;
}

void video::print()
{
    cout << get_name() << ": " << get_price() << endl;
}

// int main(int argc, char *argv[])
// {
//     cout << "This is video." << endl;
//     return 0;
// }
