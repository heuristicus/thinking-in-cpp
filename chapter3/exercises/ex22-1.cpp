#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
    for(int i = 1; i < argc; i++)
	cout << atof(argv[i]) << endl;
}
