#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() 
{
    int m;
    cin >> m;

    // Словарь для хранения количества багов по слабости
    map<string, int> bug_weakness_count;

    // Считываем багов и обновляем их количество по слабостям
    for (int i = 0; i < m; i++) 
    {
        string bug_name, weakness;
        cin >> bug_name >> weakness;
        bug_weakness_count[weakness]++;
    }

    int n;
    cin >> n;

    // Словарь для хранения количества багов, которых могут поймать охотники по их способностям
    map<string, int> hunter_ability_limit;

    // Считываем охотников и обновляем лимиты по их способностям
    for (int i = 0; i < n; i++) 
    {
        string hunter_name, ability;
        int catch_limit;
        cin >> hunter_name >> ability >> catch_limit;
        hunter_ability_limit[ability] += catch_limit;
    }

    // Подсчитываем оставшихся багов
    int bugs_left = 0;

    for (map<string, int>::iterator it = bug_weakness_count.begin(); it != bug_weakness_count.end(); ++it) 
    {
        string weakness = it->first;
        int bug_count = it->second;

        // Считаем, сколько багов останется, если у охотников есть возможность поймать багов этой слабости
        int hunter_limit = hunter_ability_limit[weakness];
        if (bug_count > hunter_limit)
            bugs_left += bug_count - hunter_limit;
    }

    cout << "Bugs left: " << bugs_left << endl;

    return 0;
}
