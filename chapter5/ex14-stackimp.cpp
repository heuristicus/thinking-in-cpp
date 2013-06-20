#include <iostream>
#include "ex14-stack.h"

using namespace std;

struct stackOfInt::stackimp
{
    int arr[50];
    int top;
    void init();
    void push(int);
    int pop();
    int peek();
};

void stackOfInt::stackimp::init()
{
    top = -1;
}

void stackOfInt::stackimp::push(int i)
{
    arr[++top] = i;
}

int stackOfInt::stackimp::pop()
{
    return arr[top--];
}

int stackOfInt::stackimp::peek()
{
    return arr[top];
}

void stackOfInt::init()
{
    stack = new stackimp;
    stack->init();
}

void stackOfInt::push(int i)
{
    stack->push(i);
}

int stackOfInt::pop()
{
    return stack->pop();
}

int stackOfInt::peek()
{
    return stack->peek();
}

int main(int argc, char *argv[])
{
    stackOfInt istack;
    istack.init();
        
    for (int i = 0; i < 10; ++i)
    {
	istack.push(i);
    }

    for (int i = 0; i < 5; ++i)
    {
	cout << "peeking: " << istack.peek() << endl;
	cout << istack.pop() << endl;
    }

    for (int i = 20; i < 23; ++i)
    {
	istack.push(i);
    }

    for (int i = 0; i < 8; ++i)
    {
	cout << "peeking: " << istack.peek() << endl;
	cout << istack.pop() << endl;
    }

    return 0;
}
