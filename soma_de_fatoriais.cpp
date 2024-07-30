#include <iostream>

using namespace std;

long long int calcFat(long long int z)
{
    if (z == 0)
        return 1;
    long long int result = 1;
    for (long long int i = z; i != 1; --i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    long long int x, y;
    while (cin >> x && cin >> y)
    {
        cout << calcFat(x) + calcFat(y) << endl;
    }

    return 0;
}