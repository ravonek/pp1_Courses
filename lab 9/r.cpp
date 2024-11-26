#include <iostream>
using namespace std;

// Функция для вычисления факториала
long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Функция для вычисления сочетаний C(n, k)
long long combinations(int n, int k) {
    if (k > n) return 0;
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Функция для вычисления числа дерранжментов !m
long long derangement(int m) {
    if (m == 0) return 1;
    if (m == 1) return 0;
    long long prev2 = 1;  // !0 = 1
    long long prev1 = 0;  // !1 = 0
    long long current = 0;

    for (int i = 2; i <= m; i++) {
        current = (i - 1) * (prev1 + prev2);
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

int main() {
    int n, k;
    cin >> n >> k;

    // Если k > n, то это невозможно
    if (k > n) {
        cout << 0 << endl;
        return 0;
    }

    // Вычисляем количество перестановок
    long long result = combinations(n, k) * derangement(n - k);
    cout << result << endl;

    return 0;
}
