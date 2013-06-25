#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char arr[] = "Good evening gentlemen.";
//    char* arr = "Good evening gentlemen.";
    
    arr[0] = 'b';
    
    cout << arr << endl;

    char* ptr = arr;
    
    ptr[0] = 'o';
    
    cout << arr << endl;

    return 0;
}
