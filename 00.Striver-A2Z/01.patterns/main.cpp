#include <iostream>
using namespace std;

// https://youtube.com/live/ntMwdzgG8ao?feature=share
// https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/

void pattern1(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

void pattern2(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

void pattern3(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << j + 1 << " ";
		}
		cout << endl;
	}
}

void pattern4(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << i + 1 << " ";
		}
		cout << endl;
	}
}

void pattern5(int n)
{
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}
}

void pattern6(int n)
{
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << j + 1 << " ";
		}
		cout << endl;
	}
}

void pattern7(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < (i * 2) + 1; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
}

void pattern8(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < (i * 2) + 1; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
}

int main()
{
	// pattern1(6);
	// pattern2(3);
	// pattern3(5);
	// pattern4(5);
	// pattern5(6);
	// pattern6(5);
	// pattern7(3);
	pattern8(3);
}