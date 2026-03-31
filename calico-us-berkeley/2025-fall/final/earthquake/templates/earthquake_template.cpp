#include <iostream>
#include <vector>
#include <array>
#include <string>

struct Person {
    double X, Y, S;
    std::string R;
};

std::array<int, 4> solve(const std::vector<Person>& persons) {
    // YOUR CODE HERE
    return {0, 0, 1, 1};
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        std::cin >> N;

        std::vector<Person> persons(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> persons[i].X
                     >> persons[i].Y
                     >> persons[i].S
                     >> persons[i].R;
        }

        const auto [floor_xE, floor_yE, ceil_xE, ceil_yE] = solve(persons);
        std::cout << floor_xE << " "
                  << floor_yE << " "
                  << ceil_xE << " "
                  << ceil_yE << "\n";
    }

    return 0;
}
