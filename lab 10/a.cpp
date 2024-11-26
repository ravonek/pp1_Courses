#include <iostream>
#include <vector>
#include <cmath>   // Для функции sqrt
#include <algorithm> // Для std::sort

using namespace std;

struct Point {
    int x, y;

    // Конструктор для удобства создания точки
    Point(int x_, int y_) : x(x_), y(y_) {}
};

// Функция для вычисления квадрата расстояния между двумя точками
int squaredDistance(const Point& a, const Point& b) {
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int main() {
    // Ввод точки P
    int px, py;
    cin >> px >> py;
    Point P(px, py);

    // Ввод количества точек
    int n;
    cin >> n;

    // Ввод списка точек
    vector<Point> points;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        points.emplace_back(x, y);
    }

    // Сортировка точек по расстоянию до точки P
    sort(points.begin(), points.end(), [&P](const Point& a, const Point& b) {
        return squaredDistance(P, a) < squaredDistance(P, b);
    });

    // Вывод отсортированных точек
    for (const auto& point : points) {
        cout << point.x << " " << point.y << endl;
    }

    return 0;
}
