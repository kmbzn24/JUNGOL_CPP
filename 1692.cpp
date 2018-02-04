/**************************************************************
    Problem: 1692
    User: qudwns0524
    Language: C++
    Result: Success
    Time:0 ms
    Memory:1740 kb
****************************************************************/
 
 
#include <iostream>
int main() {
    int a, b;
    std::cin >> a;
    std::cin >> b;
    int h = (b / 100), t = ((b % 100) / 10), o = (b % 10);
    std::cout << o * a << "\n";
    std::cout << t * a << "\n";
    std::cout << h * a << "\n";
    std::cout << b * a << "\n";
    return 0;
}
