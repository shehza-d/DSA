// page 98
#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	int a[k], k, total;
	float avg;
	for (k = 0; k < 5; k++)
	{
		cout << "Enter a number: ";
		cin >> a[k];
	}
	total = 0;
	for (k = 0; k < 5; k++)
		total = total + a[k];
	avg = total / 5;
	cout << "\nTotal=" << total << endl;
	cout << "Average=" << avg << endl;
	getch();
}
