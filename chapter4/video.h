#include <string>

#ifndef H_VID
#define H_VID
struct video
{
    std::string name;
    float price;
    std::string get_name();
    float get_price();
    void set_price(float price);
    void set_name(std::string name);
    void print();
};
#endif // H_VID
