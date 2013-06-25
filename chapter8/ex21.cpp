#include <iostream>

using namespace std;

class test
{
    const float py;
    enum { size = 10 };
    int* arr;
    int head;
public:
    test(float f);
    virtual ~test();
    int add(int a);
    int read(int ind);
};

test::test(float f) : py(f)
{
    head = 0;
    arr = new int[size];
    cout << "Size is " << size << endl;
}

test::~test(){ delete []arr; }

int test::add(int a)
{
    if (head >= size)
	return -1;
    else
	arr[head++] = a;
}

int test::read(int ind)
{
    return arr[ind];
}

int main(int argc, char *argv[])
{
    test t(3.13f);
    for (int i = 0; i < 12; ++i)
	t.add(i);


    for (int i = 0; i < 10; ++i)
	cout << t.read(i) << endl;
    
    return 0;
}
