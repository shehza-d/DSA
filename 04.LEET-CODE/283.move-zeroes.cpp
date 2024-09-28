#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int> &nums)
{
	int zeros = 0, pointer = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] != 0)
			nums[pointer++] = nums[i];
		else
			zeros++;
	}

	for (int i = 0; i < zeros; i++)
	{
		nums[pointer++] = 0;
	}
}
int main()
{
	vector<int> nums = {0, 1, 0, 3, 12};

	moveZeroes(nums);

	for (auto e : nums)
		cout << e ;
}