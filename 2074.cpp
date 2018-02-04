/**************************************************************
    Problem: 2074
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
    int arr[n][n], x = n / 2, y = 0;
    for (int i = 1; i <= n * n; i++) {
        arr[y][x] = i;
        if (i % n == 0) {
            y++;
        }
        else {
            x--;
            y--;
        }
        if (x == -1) {
            x = n - 1;
        }
        if (y == -1) {
            y = n - 1;
        }
        else if (y == n) {
            y = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
