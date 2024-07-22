#include <iostream>

// ユークリッドの互除法で最大公約数を求める関数
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    std::cout << "2つの整数を入力してください: ";
    std::cin >> num1 >> num2;

    int result = gcd(num1, num2);

    std::cout << "最大公約数: " << result << std::endl;

    return 0;
}
