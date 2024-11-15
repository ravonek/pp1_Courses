#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> dp(N + 1, 0);  // Массив для хранения минимальных операций

    for (int i = 2; i <= N; ++i) {
        dp[i] = dp[i - 1] + 1;  // Минимум, если вычитаем 1
        if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);  // Если делится на 2
        if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);  // Если делится на 3
    }

    cout << dp[N] << endl;  // Выводим ответ

    return 0;
}
