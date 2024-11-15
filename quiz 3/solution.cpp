#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>




using namespace std;

bool isPrime(int num)
{
    if(num == 1) return false;

    if(num == 2) return true;

    for(int i = 3; i < sqrt(num); i++)
    {
        if(num % i == 0)return false;
    }

    return true;
}

int main()
{

    vector<int> v;

    int num;

    map<int, int> m;


    while(cin >> num)
    {
        v.push_back(num);
        m[num]++;
    }

    vector<int> results;

    for(map<int, int> ::iterator it = m.begin(); it != m.end(); it++)
    {
        if(!isPrime(it->first) && it->second > 1)
        {
            results.push_back(it->first);
        }
    }
    
    sort(results.begin(), results.end());

    for(int i = 0; i < results.size(); i++)
    {
        cout << results.at(i) << " ";
    }

    return 0;
}