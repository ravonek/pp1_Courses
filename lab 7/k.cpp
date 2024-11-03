#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int N, R;
    cin >> N >> R;

    vector<pair<int, int>> rooks(R);


    for (int i = 0; i < R; ++i) {
        cin >> rooks[i].first >> rooks[i].second;
    }

    set<int> closedRows, closedColumns;
    vector<int> openCellsAfterEachMove;

    for (int i = 0; i < R; ++i) {
        int row = rooks[i].first;
        int col = rooks[i].second;

        closedRows.insert(row);
        closedColumns.insert(col);

        int closedRowCount = closedRows.size();
        int closedColCount = closedColumns.size();

        int closedCells = closedRowCount * N + closedColCount * (N - closedRowCount);
        int openCells = N * N - closedCells;

        openCellsAfterEachMove.push_back(openCells);
    }

    for (int openCells : openCellsAfterEachMove) {
        cout << openCells << " ";
    }
    cout << endl;

    return 0;
}
