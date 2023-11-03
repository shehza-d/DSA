#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {

    string user;
    cout << "Type Rock, Paper or Scissors:";
    getline (cin, user);

    const char* options[3] = { "Rock", "Paper", "Scissors"};

    srand(time(NULL)); //initialize the random seed

    int RandIndex = rand() % 3; //generates a random number between 0 and 2
    cout << "Computer chose: " << options[RandIndex] << "\n";

    if (user == options[RandIndex]) {
        cout << "It's a tie!";
    } else if ((user == "Rock" && options[RandIndex] == "Scissors") ||
           (user == "Scissors" && options[RandIndex] == "Paper") ||
           (user == "Paper" && options[RandIndex] == "Rock")) {
        cout << "You win!";
    } else {
        cout << "You lose!";
    }

    return 0;
}