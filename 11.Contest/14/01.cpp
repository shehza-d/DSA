// https://leetcode.com/contest/weekly-contest-422/problems/check-balanced-string/description/
#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

bool isBalanced(string num)
{
	int index = 1, even_sum = 0, odd_sum = 0;

	for (char digit : num)
	{
		bool isEven = (index % 2) == 0;

		if (isEven)
		{
			even_sum += (digit - '0');
			// cout << "even " << digit << endl;
		}
		else
		{
			// cout << "odd " << digit << endl;
			odd_sum += (digit - '0');
		}
		// cout << index << " is isEven " << isEven << endl;
		// cout << " d " << digit << " is at index: " << index << endl;
		index++;
	}

	cout << "even sum " << even_sum << endl;

	return odd_sum == even_sum;
}

int main()
{
	// cout << isBalanced("43215");
	cout << isBalanced("1234");
	// cout << isBalanced("24123");
	// cout << isBalanced("43215");

	return 0;
}