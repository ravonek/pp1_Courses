#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        deque<int> deck;
        for (int card = n; card >= 1; --card) 
        {

            deck.push_front(card);

            for (int i = 0; i < card; i++) 
            {
                int temp = deck.back();
                deck.pop_back();
                deck.push_front(temp);
            }
        }

        for (int i = 0; i < n; ++i) 
        {
            cout << deck[i] << (i == n - 1 ? "\n" : " ");
        }
    }

    return 0;
}
