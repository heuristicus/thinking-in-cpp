#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
	v.push_back(i);
    
    for (int i = 0; i < v.size(); i++)
	cout << v[i] << ", ";
    cout << endl;
    
    for (int i = 0; i < v.size(); i++)
	v[i] = v[i] * 10;
    
    for (int i = 0; i < v.size(); i++)
	cout << v[i] << ", ";
    cout << endl;

    return 0;
}
