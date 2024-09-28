#include <iostream>
#include <bits/stdc++.h>
// #include <algorithm> // for std::min_element

using namespace std;

int add_digits(int num)
{
	int sum = 0;
	while (num)
	{
		int digit = num % 10;
		// cout << digit << endl;
		sum += digit;
		num = num / 10;
	}
	return sum;
}

int minElement(vector<int> &nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		nums[i] = add_digits(nums[i]);
	}
	return *min_element(nums.begin(), nums.end());
}

int main()
{
	// vector<int> nums = {10, 12, 13, 14};
	// vector<int> nums = {1,2,3,4};
	vector<int> nums = {999,19,199};

	cout << minElement(nums);

	// for (auto e : nums)
	// cout << e;
}