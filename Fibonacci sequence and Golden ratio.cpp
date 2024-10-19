#include <iostream>
#include <iomanip> // for std::setprecision

int main() {
    const int numTerms = 20; // フィボナッチ数列の項数
    long double fib[numTerms];

    // フィボナッチ数列の最初の2つの項を設定
    fib[0] = 1;
    fib[1] = 1;

    // フィボナッチ数列を計算
    for (int i = 2; i < numTerms; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // 隣り合う項の比を計算して表示
    std::cout << std::fixed << std::setprecision(10); // 精度を設定
    for (int i = 1; i < numTerms; ++i) {
        std::cout << "F(" << i + 1 << ")/F(" << i << ") = " << fib[i] / fib[i - 1] << std::endl;
    }

    return 0;
}
