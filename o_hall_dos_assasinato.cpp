#include <iostream>
#include <set>
#include <map>

using namespace std;

void showKillers(set<string> &v, map<string, int> &m)
{
    bool isDead;
    for (auto kl : m)
    {
        if (v.count(kl.first) == 0)
        {
            cout << kl.first << " " << kl.second << endl;
        }
    }
}

int main()
{

    string x, y;
    set<string> kills;
    map<string, int> killers_map;
    while (cin >> x && cin >> y)
    {
        killers_map[x]++;
        kills.insert(y);
    }
    cout << "HALL OF MURDERERS\n";
    showKillers(kills, killers_map);

    return 0;
}