#include <iostream>

using namespace std;

namespace Me {
    class Us {
	friend void you();
    };
    void you(){ cout << "You are me." << endl; }
}

int main() { using namespace Me; you();}
