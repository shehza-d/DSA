#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

int solve(int N, int M, int K, vector<tuple<char, int, int>> P) {
    // N: Number of rows of the board
    // M: Number of columns of the board
    // K: Number of pieces
    // P: list of tuples. Each tuple contains (piece type, x position, y position)

    // YOUR CODE HERE
    return 0;
}

int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m; cin >> n >> m;
		int k; cin >> k;
		vector<tuple<char, int, int>> pieces;
		while (k--) {
			char piece; int x, y; cin >> piece >> x >> y;
            pieces.emplace_back(piece, x, y);
		}
	    cout << solve(n, m, k, pieces) << "\n";
	}
}
