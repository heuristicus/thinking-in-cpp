#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string s;
    std::getline(std::cin, s);
    for (int i = s.length() - 1; i > 0; i--)
    {
	s.resize(i, ' ');
	cout << s << endl;
    }
    return 0;
}
