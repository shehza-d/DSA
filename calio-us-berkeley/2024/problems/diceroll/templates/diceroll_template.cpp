#include <iostream>
#include <vector>

using namespace std;

/**
 * Return the best number to "zero out" in order to
 * minimize the expected value of a dice roll.
 * 
 * N: the number of faces on the die
 * X: the list of numbers on each face of the die
 */
int solve(int N, vector<int> X) {
    // YOUR CODE HERE
    return -1;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        vector<int> X(N);
        for (int &item : X) {
            cin >> item;
        }
        cout << solve(N, X) << '\n';
    }
}
