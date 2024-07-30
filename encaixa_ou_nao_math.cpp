#include <iostream>

using namespace std;

int main()
{
    int cases, index_n1;
    string n1, n2, n3;
    cin >> cases;
    while (cases--)
    {
        cin >> n1 >> n2;
        if (n2.size() > n1.size())
        {
            cout << "nao encaixa\n";
        }
        else
        {
            n3 = "";
            index_n1 = n1.size() - n2.size();

            for (int i = index_n1; i <= n1.size(); ++i)
            {
                n3 += n1[i];
            }
            if (stoi(n2) == stoi(n3))
            {
                cout << "encaixa\n";
            }
            else
            {
                cout << "nao encaixa\n";
            }
        }
    }
    return 0;
}