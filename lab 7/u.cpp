#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  
  set<string> available;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    available.insert(s);
  }

  cin >> m;
  vector<pair<string, string>> v;
  for (int i = 0; i < m; i++) {
    string one, two;
    cin >> one >> two;
    v.push_back(make_pair(one, two));
  }

  string target;
  cin >> target;
  
  set<string> result_set;
  for (int i = 0; i < v.size(); i++) {
    if (v[i].first == target && available.count(v[i].second)) 
      result_set.insert(v[i].second);
    else if (v[i].second == target && available.count(v[i].first)) 
      result_set.insert(v[i].first);
  }

  vector<string> result(result_set.begin(), result_set.end());

  cout << result.size() << endl;
  if (result.size() == 0) return 0;
  
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
  
  return 0;
}
