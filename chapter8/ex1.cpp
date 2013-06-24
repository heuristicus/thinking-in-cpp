#include <stdio.h>

using namespace std;


int main(int argc, char const *argv[])
{
	const int a = 5;
	const int b = 6;
	const int c = 7;

	int arr[a + b + c];
	for (int i = 0; i < a + b + c; ++i)
		arr[i] = i;
	
	for (int i = 0; i < a + b + c; ++i)
		printf("%d\n", arr[i]);
	
	return 0;
}