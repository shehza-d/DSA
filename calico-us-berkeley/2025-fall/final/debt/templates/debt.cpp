#include <iostream>
#include <vector>
using namespace std;


/**
 * Return the minimum amount of extra money needed to pay off all debts.
 * N: number of people
 * M: number of debts
 * X[i]: person in debt
 * Y[i]: person who is owed money
 * Z[i]: amount of money that is owed
 */
long long solve(int N, int M, vector<int> X, vector<int> Y, vector<int> Z) {
    // YOUR CODE HERE
    return 0;
}

int main() {
    int T;
    cin >> T;
    for (int tc = 0; tc < T; ++tc) {
        int N, M;
        cin >> N >> M;
        vector<int> X(M), Y(M), Z(M);
        for (int i = 0; i < M; ++i) {
            cin >> X[i] >> Y[i] >> Z[i];
        }
        cout << solve(N, M, X, Y, Z) << '\n';
    }
    return 0;
}