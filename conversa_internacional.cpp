#include <iostream>

using namespace std;

int main()
{

    int cases, language_qtd;
    string languages, first_language;
    bool isEngliesh;

    cin >> cases;

    while (cases--)
    {
        cin >> language_qtd;
        isEngliesh = false;
        for (int i = 0; i < language_qtd; ++i)
        {
            cin >> languages;
            if (i == 0)
            {
                first_language = languages;
            }
            else
            {
                if (first_language != languages)
                {
                    isEngliesh = true;
                }
            }
        }
        isEngliesh ? cout << "ingles\n" : cout << languages << endl;
    }

    return 0;
}