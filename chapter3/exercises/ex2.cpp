#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    
    cout << "How many numbers to check? ";
    cin >> n;
    
    for (int i = 1; i < n; ++i){
	float root = sqrt(i);
	bool prime = true;
	for (int j = 2; j <= root; ++j){
	    if (i % j == 0){
		cout << i << " is not prime." << endl;
		prime = false;
		break;
	    }
	}
	if (prime)
	    cout << i << " is prime." << endl;
    }
    
    return 0;
}
