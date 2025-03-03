#include <bits/stdc++.h>
#include <iostream>

using namespace std;

vector<vector<int>> sortMatrix(vector<vector<int>> &grid)
{
	long n = grid.size();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			// diagonals[i - j].push_back(grid[i][j]);

			cout << "value: " << grid[i][j] << "    i: " << i << "  j:   " << j << "  d  " << i - j << "\n";
		}
	}

	return grid;
}

// Helper function to print the matrix
void printMatrix(const vector<vector<int>> &matrix)
{
	for (const auto &row : matrix)
	{
		for (int num : row)
		{
			cout << num << "  ";
		}
		cout << endl;
	}
}

int main()
{
	// vector<vector<int>> grid = {{1, 7, 3}, {9, 8, 2}, {4, 5, 6}};
	vector<vector<int>> grid = {{1, 3}, {9, 2}, {5, 6}};

	vector<vector<int>> sortedGrid = sortMatrix(grid);

	cout << "\nSorted Matrix:\n";
	printMatrix(grid);
}