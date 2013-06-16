#include <iostream>

using namespace std;

int main() {
    int a[10];
    char b[10];
    long c[10];
    float d[10];
    double e[10];
    
    cout << "sizeof(int) = "<< sizeof(int) << endl;
    for(int i = 0; i < 10; i++)
	cout << "&a[" << i << "] = "
	     << (long)&a[i] << endl;

    cout << "sizeof(char) = "<< sizeof(char) << endl;
    for(int i = 0; i < 10; i++)
	cout << "&b[" << i << "] = "
	     << (long)&b[i] << endl;

    cout << "sizeof(long) = "<< sizeof(long) << endl;
    for(int i = 0; i < 10; i++)
	cout << "&c[" << i << "] = "
	     << (long)&c[i] << endl;

    cout << "sizeof(float) = "<< sizeof(float) << endl;
    for(int i = 0; i < 10; i++)
	cout << "&d[" << i << "] = "
	     << (long)&d[i] << endl;

    cout << "sizeof(double) = "<< sizeof(double) << endl;
    for(int i = 0; i < 10; i++)
	cout << "&e[" << i << "] = "
	     << (long)&e[i] << endl;


}
