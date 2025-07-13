#include <iostream>
using namespace std;

// Print 1 to N using recursion
void recursion1(int i, int n)
{
	if (i > n)
		return;

	cout << i << " ";

	recursion1(i + 1, n);
}

// Print N to 1 using recursion
void recursion2(int n)
{
	if (1 > n)
		return;

	cout << n << " ";

	recursion2(n - 1);
}

// Print 1 to N using backtracking-recursion
void recursion3(int n)
{
	if (1 > n)
		return;

	recursion3(n - 1);

	cout << n << " ";
}

// Print N to 1 using backtracking-recursion
void recursion4(int i, int n)
{
	if (i > n)
		return;

	recursion4(i + 1, n);

	cout << i << " ";
}

int main()
{
	int n = 12;

	recursion1(1, n);
	recursion2(n);

	recursion3(n);
	recursion4(1, n);
}