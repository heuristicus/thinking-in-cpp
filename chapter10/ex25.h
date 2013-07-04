#ifndef H_E25
#define H_E25

#include <string>
#include <iostream>

class straw
{
public:
    straw(std::string ss) : yes(ss){};
    virtual ~straw(){};
    void print(){ std::cout << yes.c_str() << std::endl; };
private:
    std::string yes;
};

#endif // H_E25
