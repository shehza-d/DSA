#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

/**
 * Return the expected length of a path that starts at node 1 in the pachinko.
 * 
 * N: number of nodes in the pachinko
 * S: starting node of the flipper
 * E: ending node of the flipper
 * P: list of parent nodes in the pachinko
 */
double solve(int N, int S, int E, vector<int> P) {
    // YOUR CODE HERE
    return 0;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, S, E;
        cin >> N >> S >> E;
        vector<int> P(N - 1);
        for (int i = 0; i < N - 1; ++i) {
            cin >> P[i];
        }
        cout << fixed << setprecision(6) << solve(N, S, E, P) << '\n';
    }
    return 0;
}
