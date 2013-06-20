#ifndef H_INTSTACK
#define H_INTSTACK

class stackOfInt
{
public:
    struct stackimp;
    stackimp* stack;
    void init();
    void push(int);
    int pop();
    int peek();
};

#endif // H_INSTACK
