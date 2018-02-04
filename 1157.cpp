/**************************************************************
    Problem: 1157
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
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            int cmd;
            if (arr[j] > arr[j + 1]) {
                //교환 작업
                cmd = arr[j];
                arr[j] = arr[j + 1];
                arr[j+ 1] = cmd;
            }
        }
        for (int j = 0; j < n; j++) {
            std::cout << arr[j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
