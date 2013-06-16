#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int secret = 15;
    int guess = 0;
    
    while (guess != secret){
	cout << "Guess the number: ";
	cin >> guess;
    }

    cout << "You guessed it!" << endl;
    
    return 0;
}
