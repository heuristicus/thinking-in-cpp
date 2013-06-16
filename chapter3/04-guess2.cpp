#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int secret = 15;
    int guess;

    do
    {
	cout << "Guess the number: ";
	cin >> guess;
	
    } while (guess != secret);

    cout << "You guessed it!" << endl;
    
    return 0;
}
