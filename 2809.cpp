/**************************************************************
    Problem: 2809
    User: qudwns0524
    Language: C++
    Result: Success
    Time:1 ms
    Memory:1764 kb
****************************************************************/
 
 
#include <iostream>
#include <math.h>
int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i < sqrt(n); i++) {
        if (n % i == 0) {
            std::cout << i << " ";
        }
    }
    for (int i = sqrt(n); i > 0; i--) {
        if (n % i == 0) {
            std::cout << n / i << " ";
        }
    }
}
