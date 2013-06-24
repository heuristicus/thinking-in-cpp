#include <iostream>
#include <ctime>

using namespace std;



int main(int argc, char *argv[])
{
    const int t(time(NULL));
    cout << "The time is " << t << endl;
    t = time(NULL);
    cout << "New time is " << t << endl;
    return 0;
}
