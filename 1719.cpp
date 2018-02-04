/**************************************************************
    Problem: 1719
    User: qudwns0524
    Language: C++
    Result: Success
    Time:0 ms
    Memory:1740 kb
****************************************************************/
 
 
#include <iostream>
int main() {
    int h, n;
    std::cin >> h;
    std::cin >> n;
    if ((h < 1) || (h > 100) || (h % 2 == 0)) {
        std::cout << "INPUT ERROR!";
        return 0;
    }
    if (n == 1) {
        for (int i = 1; i <= h / 2 + 1; i++) {
            for (int j = 0; j < i; j++) {
                std::cout << "*";
            }
            std::cout << "\n";
        }
        for (int i = h / 2; i >= 1; i--) {
            for (int j = 0; j < i; j++) {
                std::cout << "*";
            }
            std::cout << "\n";
        }
    }
    else if (n == 2) {
        for (int i = 1; i <= h / 2 + 1; i++) {
            for (int j = h / 2 - i; j >= 0; j--) {
                std::cout << " ";
            }
            for (int j = 0; j < i; j++) {
                std::cout << "*";
            }
            std::cout << "\n";
        }
        for (int i = h / 2; i >= 1; i--) {
            for (int j = h / 2 - i; j >= 0; j--) {
                std::cout << " ";
            }
            for (int j = 0; j < i; j++) {
                std::cout << "*";
            }
            std::cout << "\n";
        }
    }
    else if (n == 3) {
        for (int i = h; i > 0; i -= 2) {
            for (int j = 0; j < (h - i) / 2; j++) {
                std::cout << " ";
            }
            for (int j = 0; j < i; j++) {
                std::cout << "*";
            }
            std::cout << "\n";
        }
        for (int i = 3; i <= h; i += 2) {
            for (int j = 0; j < (h - i) / 2; j++) {
                std::cout << " ";
            }
            for (int j = 0; j < i; j++) {
                std::cout << "*";
            }
            std::cout << "\n";
        }
    }
    else if (n == 4) {
        for (int i = (h + 1) / 2; i > 0; i--) {
            for (int j = 0; j < (h + 1) / 2 - i; j++) {
                std::cout << " ";
            }
            for (int j = 0; j < i; j++) {
                std::cout << "*";
            }
            std::cout << "\n";
        }
        for (int i = 2; i <= (h + 1) / 2; i++) {
            for (int j = 0; j < (h + 1) / 2 - 1; j++) {
                std::cout << " ";
            }
            for (int j = 0; j < i; j++) {
                std::cout << "*";
            }
            std::cout << "\n";
        }
    }
    else {
        std::cout << "INPUT ERROR!";
    }
    return 0;
}
