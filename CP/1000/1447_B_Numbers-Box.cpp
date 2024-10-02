#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n, m;
	cin >> t;

	while (t--)
	{
		cin >> n >> m;
		int neg = 0, sum = 0, Min = 101;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				int temp;
				cin >> temp;

				sum += abs(temp);
				if (temp < 0)
					neg++;
				Min = min(abs(temp), Min);
			}
		}
		if (neg % 2 == 1)
			cout << sum - (2 * Min) << endl;
		else
			cout << sum << endl;
	}

	return 0;
}