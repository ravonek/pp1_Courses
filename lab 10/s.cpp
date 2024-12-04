#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, mx;
    scanf("%i", &n);
    mx = n;

    vector<vector<int>> time(24, vector<int>(60, 0));

    while (n--) {
        int t[4];
        for (int i = 0; i < 4; i++)
            scanf("%i", &t[i]);

        if (t[0] == t[2] && t[1] == t[3]) {
            mx--;
            continue;
        }

        t[2] += (t[0] > t[2] ? 24 : 0);
        
        for (int h = t[0]; h < t[2]; h++) 
            for (int m = (h == t[0] ? t[1] : 0); m < 60; m++) 
                time[h % 24][m]++;
        
        for (int m = (t[0a] == t[2] ? t[1] : 0); m < t[3]; m++) 
            time[t[2] % 24][m]++;
    }

    int res = 0;
    for (int h = 0; h < 24; h++)
        for (int m = 0; m < 60; m++) 
            res += (time[h][m] == mx);

    printf("%i", res);
}