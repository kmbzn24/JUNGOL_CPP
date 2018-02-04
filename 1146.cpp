/**************************************************************
    Problem: 1146
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
    int min = 2147483647, place, change = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                place = j;
                change++;
            }
        }
        //change
        int cmd = arr[i];
        arr[i] = arr[place];
        arr[place] = cmd;
        for (int j = 0; j < n; j++) {
            std::cout << arr[j] << " ";
        }
        std::cout << "\n";
        min = 2147483647;
        change = 0;
    }
    return 0;
}
