#include <iostream>

using namespace std;

int main()
{

    long long int x, y;
    while (cin >> x && cin >> y)
    {
        x < y ? cout << y - x << endl : cout << x - y << endl;
    }
    return 0;
}