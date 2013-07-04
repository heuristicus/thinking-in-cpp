#include <iostream>

using namespace std;

class sarr
{
public:
    sarr(){};
    virtual ~sarr(){};
    static void p1(){ 
	for (int i = 0; i < sizeof(arr)/sizeof(*arr); ++i)
	    cout << arr[i] << endl;
    };
    static void p2(){
	for (int i = 0; i < sizeof(arr2)/sizeof(*arr2); ++i)
	    cout << arr2[i] << endl;
    };
private:
    static const int arr[4];
    static int arr2[3];
};

const int sarr::arr[] = {10,20,30,40};
int sarr::arr2[] = {50,60,70};

int main(int argc, char *argv[])
{
    sarr i;
    i.p1();
    i.p2();
    return 0;
}
