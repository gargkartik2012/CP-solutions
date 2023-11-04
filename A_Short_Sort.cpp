#include <iostream>
#include <string>

std::string can_make_abc(std::string cards) {
    if (cards == "abc" || cards == "cba"  || cards == "bac" ||  cards == "acb") {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        std::string cards;
        std::cin >> cards;

        std::cout << can_make_abc(cards) << std::endl;
    }

    return 0;
}
