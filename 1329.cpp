/**************************************************************
    Problem: 1329
    User: qudwns0524
    Language: C++
    Result: Success
    Time:1 ms
    Memory:1740 kb
****************************************************************/
 
 
#include <iostream>
int main() {
    int n;
    std::cin >> n;
    if ((n < 1) || (n > 100) || (n % 2 == 0)) {
        std::cout << "INPUT ERROR!";
        return 0;
    }
    for (int i = 0; i < n / 2 + 1; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= (2 * i + 1); j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    for (int i = n / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= (2 * i + 1); j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}
