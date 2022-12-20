// From Sir Inzamam repo for practice
#include <iostream>
#include <string>
#define len(arr) (sizeof(arr) / sizeof(arr[0]))
using namespace std;

int main()
{

	string phase;

	cout << "Enter string: ";
	getline(cin, phase);

	phase.append(1, ' ');

	string stream[1000];
	int lastSpace = 0;
	int streamCount = 0;
	int phaseLen = phase.length();

	for (int i = 0; i < phaseLen; i++)
	{

		//	cout << "i = "<< i << " out of " << phase.length();
		// cout << " " << phase.at(i) << endl ;

		if (phase.at(i) == ' ')
		{ // ddddd

			//	cout << "length is : " << i << endl ;
			string temp = "";

			for (int j = lastSpace; j < i; j++)
			{

				temp.append(1, phase.at(j));
			}
			stream[streamCount] = temp;
			stream[streamCount + 1] = "space";
			streamCount += 2;
			lastSpace = i;
			temp = "";
		}
	}

	for (int i = 0; i < streamCount - 1; i++)
	{
		cout << i << " = " << stream[i] << endl;
	}

	return 0;
}
