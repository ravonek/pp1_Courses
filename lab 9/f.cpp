#include<iostream>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

int main()
{

    int days;
    cin >> days;


    map<string, int> percentage;

    int overall = 0;


    for (int i = 0; i < days; i++)
    {
        int operations;
        cin >> operations;

        for(int j = 0; j < operations; j++)
        {
            string city;
            int people;
            cin >> city >> people;

            percentage[city] += people;
            overall += people;
        }
    }


    vector<pair<string, double> > v(percentage.begin(), percentage.end());

    for(int i = 0; i < v.size(); i++)
    {
        double n = v.at(i).second;

        v.at(i).second = (n / overall) * 100.0;
    }
    
    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i).first << " " <<  v.at(i).second << endl;
     }

    return 0;
}