#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

// Function which return string by concatenating it.
string repeat_string(string str, int times)
{
	string temporary_string = str;

	for (int i = 1; i < times; i++)
	{
		str += temporary_string; // Concatenating strings
	}

	return str;
}

int main(void)
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int time;
		cin >> time;

		// agar time 180 se zada hy tw canceled
		if (time >= 180)
		{
			cout << "canceled" << endl;
			continue;
		}

		// agar time 1 se kam hy tw return "good joke"
		if (time < 1)
		{
			cout << "haha good one" << endl;
			continue;
		}

		// divide by 10 se last ka zero remove ho jata hy
		cout << repeat_string("berkeley", time / 10) + "time" << endl;
	}
	return 0;
}
