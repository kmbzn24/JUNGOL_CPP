/**************************************************************
    Problem: 1338
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
    char arr[n][n];
    int x = n - 1, y = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }
    char c = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            arr[y][x] = c;
            if ((y < n - 1) && (x > 0)) {
                x--;
                y++;
            }
            else {
                x = n - 1;
                y = i + 1;
            }
            c++;
            if (c > 'Z') {
                c = 'A';
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 0) {
                std::cout << "  ";
            }
            else {
                std::cout << arr[i][j] << " ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}
