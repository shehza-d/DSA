// https://leetcode.com/problems/two-sum/
#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
	for (int i = 0; i < sizeof(nums); i++)
	{
		for (int j = 0; j < sizeof(nums); j++)
		{
			if (i != j)
			{
				if (nums[i] + nums[j] == target)
				{
					return {i, j};
				};
			};
		};
	};
	return {}; // why is this important
};

int main()
{
	vector<int> my_nums{2, 7, 11, 15};

	vector<int> arr = twoSum(my_nums, 9);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i];
	}
	cout << endl;

	return 0;
};
