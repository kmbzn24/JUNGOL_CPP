/**************************************************************
    Problem: 2815
    User: qudwns0524
    Language: C++
    Result: Success
    Time:0 ms
    Memory:1740 kb
****************************************************************/
 
 
#include <iostream>
int f(int n) {
    if (n / 2 > 0) { //2로 나눈 값이 0이 되면 더이상 반복을 하지 않는다.
        f(n / 2);
    }
    std::cout << n % 2; //순서가 역순으로 출력되어야 하므로 재귀함수의 뒤에 위치한다.
}
int main() {
    int n;
    std::cin >> n;
    f(n);
}
