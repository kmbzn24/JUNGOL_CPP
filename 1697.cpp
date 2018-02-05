/**************************************************************
    Problem: 1697
    User: qudwns0524
    Language: C++
    Result: Success
    Time:1 ms
    Memory:1740 kb
****************************************************************/
 
 
#include <iostream>
int main() {
    int n;
    std::cin >> n; //첫번째 줄 입력
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        char c;
        std::cin >> c;
        //inqueue
        if (c == 'i') {
            int var;
            std::cin >> var;
            for (int i = n - 1; i >= 0; i--) {
                if (arr[i] != 0) {
                    arr[i + 1] = var;
                    break;
                }
            }
            if (arr[0] == 0) {
                arr[0] = var;
            }
        }
        //dequeue
        if (c == 'o') {
            if (arr[0] != 0) {
                std::cout << arr[0] << "\n";
            }
            else {
                std::cout << "empty\n";
            }
            for (int i = 0; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            arr[n - 1] = 0;
        }
        //요소의 개수 출력
        if (c == 'c') {
            for (int i = n - 1; i >= 0; i--) {
                if (arr[i] != 0) {
                    std::cout << i + 1 << "\n";
                    break;
                }
            }
            if (arr[0] == 0) {
                std::cout << "0\n";
            }
        }
    }
    return 0;
}
