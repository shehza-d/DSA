#include <iostream>

using namespace std;

/**
 * Determine if the word W follows the rules of toki pona phonotactics.
 * 
 * W: the word to check
 */
string solve(string W) {
    // YOUR CODE HERE
    return "pona";
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        string W;
        cin >> W;
        cout << solve(W) << '\n';
    }
}
