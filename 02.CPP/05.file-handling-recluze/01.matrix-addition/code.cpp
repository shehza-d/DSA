#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ofstream fout;

	//

	ifstream fin1("input1.txt", ios::binary); // 1st way to read

	ifstream fin2;
	fin2.open("input2.txt", ios::binary); // 2nd way

	if (fin1.fail() || fin2.fail())
	{
		cout << "Failed to read file ... " << endl;
	}

	fout.open("output.txt");

	if (!fout.is_open())
	{
		cout << "error";
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int val1, val2;

			fin1 >> val1;
			fin2 >> val2;

			// saving sum to the file
			fout << val1 + val2 << " ";
		}
		fout << endl;
	}

	// fout << 786;

	// int a = 5;

	// this needs address of char
	// fout.write((char *)&a, sizeof(int));

	fout.close();

	return 0;
}