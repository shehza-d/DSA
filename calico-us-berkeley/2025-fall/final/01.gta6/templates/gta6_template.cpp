#include <iostream>

using namespace std;

/**
 * E: Name of event
 * Y: Year of event
 * M: Month of event
 * D: Day of event
 */
 string solve(string E, int Y, int M, int D) {
    // YOUR CODE HERE
    return "";
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T; i++) {
        string E;
        getline(cin, E);
        int D, M, Y;
        cin >> Y >> M >> D;
        cin.ignore();
        cout << solve(E, Y, M, D) << '\n';
    }
}