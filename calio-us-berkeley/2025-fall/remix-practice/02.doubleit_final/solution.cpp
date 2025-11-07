#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int people, total_amount_given = 0, offer_amount = 1;
		cin >> people;

		for (int j = 0; j < people; j++)
		{
			char persons_choice;
			cin >> persons_choice;

			if (persons_choice == 'T')
			{
				total_amount_given += offer_amount;
				offer_amount = 1; // resetting offer_amount
			}

			if (persons_choice == 'D')
			{
				offer_amount *= 2;
			}
		}
		cout << total_amount_given << endl;
	}

	return 0;
}