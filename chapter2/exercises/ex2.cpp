#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int radius;
    cout << "Enter the circle radius." << endl;
    cin >> radius;

    float area = 3.14 * radius * radius;
    
    cout << "Area is " << area << endl;
    
    return 0;
}
