#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ofstream fout;

	fout.open("sample.txt");

	if (!fout.is_open())
	{
		cout << "error";
	}

	fout << "Hello World 2";

	fout.close();

	return 0;
}