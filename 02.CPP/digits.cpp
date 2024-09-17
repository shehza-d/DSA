// https://youtu.be/1xNbjMdbjug?si=QkW98y7RjgNbA-RW
// #include <stdio.h>	//for C || printf, scanf
#include <iostream> // for CPP  || cout  , cin

using namespace std;

void extract_digits(int num)
{
	while (num)
	{
		int digit = num % 10;
		cout << digit << endl;
		num = num / 10;
	}
}

int main(void)
{
	int num = 7789;

	extract_digits(num);
	extract_digits(10019);

	// original value will not be changes because we are passing by value
	cout << num << endl;

	return 0;
}