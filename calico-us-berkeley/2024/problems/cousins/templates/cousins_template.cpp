#include <iostream>
#include <vector>
using namespace std;

/**
 * For each game, output who wins the game in one line.
 * 
 * N: size of the game board
 * M: number of different games
 * A: game board
 * G: description of each game
 */
void solve(int N, int M, vector<int>& A, vector<vector<int>>& G) {
    // YOUR CODE HERE
    return;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    vector<vector<int>> G(M, vector<int>(2));
    for (int i = 0; i < N; ++i)
        cin >> A[i];
    for (int i = 0; i < M; ++i)
        cin >> G[i][0] >> G[i][1];
    solve(N, M, A, G);
    return 0;
}
