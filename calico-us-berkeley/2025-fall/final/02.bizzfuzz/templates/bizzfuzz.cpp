#include <iostream>
#include <string>

using namespace std;

/**
 * Return the string containing the word you should say
 *
 * W1: the second-to-last word said
 * W2: the last word said
 */

string format_string(int input)
{
    if (input % 3 == 0 && input % 5 == 0)
    {
        return "bizzfuzz";
    }
    else if (input % 3 == 0)
    {
        return "bizz";
    }
    else if (input % 5 == 0)
    {
        return "fuzz";
    }
    else
        return to_string(input);
    ;
}

string solve(string W1, string W2)
{
    if (W1 != "fuzz" && W1 != "bizz" && W1 != "bizzfuzz")
    {
        int W3 = stoi(W1) + 2;
        return format_string(W3);
    }

    else if (W2 != "fuzz" && W2 != "bizz" && W2 != "bizzfuzz")
    {
        int W3 = stoi(W2) + 1;
        return format_string(W3);
    }

    // YOUR CODE HERE
    else
        return "crap";
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string W1, W2;
        cin >> W1 >> W2;
        cout << solve(W1, W2) << '\n';
    }
}
