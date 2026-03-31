#include <iostream>
#include <vector>
using namespace std;

/**
  *  P: list of floating point numbers. Each floating point number represents 
  *	the probability between 0 and 1 of a successful reaction.
  *
  *	Prints a sequence of actions to standard output that represents the best
  *	strategy to maximize the number of successful reactions.
  */
void solve(int A, vector<float> P) {
	cout << "NEXT";
}

int main() {
	int A; cin >> A;
	vector<float> P;
	for (int i = 0; i < A; i++) {
		float temp; cin >> temp;
		P.push_back(temp);
	}
	solve(A, P);
}