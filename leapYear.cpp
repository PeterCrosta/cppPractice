#include <iostream>

int main() {
    int year;
    std::cout << "I will tell you if a year is a leap-year.\nWhat year would you like to check? ";
    std::cin >> year;
    if (year % 4 == 0) {
        std::cout << "That was a leap-year.\n";
    } else {
        std::cout << "That wasn't a leap year.\n";
    }
}