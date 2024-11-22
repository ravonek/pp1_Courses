#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> vec1(N), vec2(M);
    
    // Чтение входных последовательностей
    for (int i = 0; i < N; i++) {
        cin >> vec1[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> vec2[i];
    }
    
    // Удаление последовательных дубликатов
    vec1.erase(unique(vec1.begin(), vec1.end()), vec1.end());
    vec2.erase(unique(vec2.begin(), vec2.end()), vec2.end());
    
    // Объединение последовательностей "поочередно"
    vector<int> merged;
    int i = 0, j = 0;
    while (i < vec1.size() || j < vec2.size()) {
        if (i < vec1.size()) merged.push_back(vec1[i++]);
        if (j < vec2.size()) merged.push_back(vec2[j++]);
    }
    
    // Удаление дубликатов в итоговом векторе
    merged.erase(unique(merged.begin(), merged.end()), merged.end());
    
    // Вывод результата
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
