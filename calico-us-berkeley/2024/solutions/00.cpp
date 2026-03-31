#include <iostream>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

/**
 * Return the CALICOncatenation of S.
 *
 * S: a string
 */
string solve(string S)
{
    string result = "";
    string a = "CALICO";

    // cout << S.length();

    // transform(S.begin(), S.begin() + 4, S.begin(), ::toupper);

    // S.erase(S.begin(), S.begin() + 3);

        S = "CALICO" + S.substr(5);
    for (int i = 0; S[i] != '\0'; i++)
    {

        // cout << (char)toupper(S[i]);
    }

    return S;
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string S;
        cin >> S;
        cout << solve(S) << '\n';
    }
}
