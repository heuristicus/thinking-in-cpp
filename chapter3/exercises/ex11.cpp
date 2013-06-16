#include <iostream>
using namespace std;
int main() {
    double i,j;
    cout << "Enter an integer: ";
    cin >> i;
    cout << "Enter another integer: ";
    cin >> j;
    cout << "i > j is " << (i > j) << endl;
    cout << "i < j is " << (i < j) << endl;
    cout << "i >= j is " << (i >= j) << endl;
    cout << "i <= j is " << (i <= j) << endl;
    cout << "i == j is " << (i == j) << endl;
    cout << "i != j is " << (i not_eq j) << endl;
    cout << "i && j is " << (i and j) << endl;
    cout << "i || j is " << (i or j) << endl;

    cout << " (i < 10) && (j < 10) is "
	 << ((i < 10) && (j < 10)) << endl;
}
