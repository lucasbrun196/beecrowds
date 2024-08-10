#include <iostream>
#include <map>

using namespace std;

int main()
{

    int cases, number;
    map<int, int> map_number_count;
    cin >> cases;
    while (cases--)
    {
        cin >> number;
        map_number_count[number]++;
    }

    for (auto n : map_number_count)
    {
        cout << n.first << " aparece " << n.second << " vez(es)\n";
    }

    return 0;
}