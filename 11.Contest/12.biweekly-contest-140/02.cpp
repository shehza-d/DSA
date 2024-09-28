#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long maximumTotalSum(vector<int> &maximumHeight)
{
	unordered_map<long, long> umap;

	long long result = 0, n = maximumHeight.size();
	// sort(maximumHeight.begin(), maximumHeight.end());

	for (int i = 0; i < n; i++)
	{
		if (umap.find(maximumHeight[i]) != umap.end())
		{
			// if (maximumHeight[i] < 2)
			// 	return -1;
			int temp = maximumHeight[i] - 1;
			// cout << "Key found! temp" << temp << endl;
			while (temp > 0)
			{
				if (umap.find(temp) == umap.end())
				{
					// cout << "2inserting " << temp << endl;
					umap.insert({temp, 1});
					break;
				}
				temp--;
			}
			if (temp < 1)
				return -1;
		}
		else
		{
			// cout << "Key 4 not found!" << endl;
			// cout << "1inserting " << maximumHeight[i] << endl;
			umap.insert({maximumHeight[i], 1});
		}
	}

	for (auto &x : umap)
	{
		result += x.first;
		// cout << x.first  << " " << x.second << " " << endl;
	}
	return result;
}

int main()
{
	// vector<int> maximumHeight = {2, 3, 4, 3}; // 10
	// vector<int> maximumHeight = {15, 10};	  // 25
	// vector<int> maximumHeight = {2, 2, 1};				  // -1
	vector<int> maximumHeight = {6, 6, 6, 3, 7, 2, 6, 5}; // -1

	cout << maximumTotalSum(maximumHeight);

	// for (auto e : nums)
	// cout << e;
}