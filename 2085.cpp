/**************************************************************
    Problem: 2085
    User: qudwns0524
    Language: C++
    Result: Success
    Time:37 ms
    Memory:1740 kb
****************************************************************/
 
 
#include <iostream>
int main() {
    int n, m, result = 0;
    std::cin >> n;
    std::cin >> m;
    int s = m + 1;
    int e = n;
    while (1) {
        if (s % 4 == 0) {
            break;
        }
        s++;
    }
    while (1) {
        if (e % 4 == 0) {
            break;
        }
        e--;
    }
    result = (e - s) / 4 + 1; //4의 배수의 개수를 센다.
    for (int i = ((m + 100) / 100) * 100; i <= n; i += 100) {
        if (i % 400 != 0) {
            result--; //그 중에서 100의 배수이자 400의 배수가 아닌(윤년이 아닌) 수의 개수를 뺀다.
        }
    }
    printf("%d", result);
    return 0;
}
