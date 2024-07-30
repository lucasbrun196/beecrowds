#include <iostream>

using namespace std;

int main()
{
    string x, y, sum_index;
    int x_index, y_index, carrys, dif;

    while (true)
    {
        cin >> x >> y;
        if (x == "0" && y == "0")
            break;

        if (x.size() > y.size())
        {
            dif = x.size() - y.size();
            for (int i = 0; i < dif; ++i)
            {
                y = '0' + y;
            }
        }
        else if (y.size() > x.size())
        {
            dif = y.size() - x.size();
            for (int i = 0; i < dif; ++i)
            {
                x = '0' + x;
            }
        }

        carrys = 0;
        for (int i = x.size() - 1; i >= 0; --i)
        {
            x_index = x[i] - '0';
            y_index = y[i] - '0';
            if ((x_index + y_index) > 9)
            {
                carrys++;
                sum_index = to_string(x[i] + y[i]);
                x[i - 1] += (sum_index[0] - '0');
            }
        }

        if (carrys == 1)
        {
            cout << carrys << " carry operation.\n";
        }
        else if (carrys > 1)
        {
            cout << carrys << " carry operations.\n";
        }
        else
        {
            cout << "No carry operation.\n";
        }
    }

    return 0;
}