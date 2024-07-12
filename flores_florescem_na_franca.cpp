#include <iostream>
#include <vector>
#include <cctype>
#include <string>

using namespace std;

bool isTautogram(vector<string>& vec_words) {
    if (vec_words.size() <= 1) {
        return true;
    }

    char firstLetter = toupper(vec_words[0][0]);

    for (int i = 1; i < vec_words.size(); ++i) {
        char firstLetterNextWord = toupper(vec_words[i][0]);
        if (firstLetterNextWord != firstLetter) {
            return false;
        }
    }
    return true;
}

int main() {
    string phrase, word;
    while (true) {
        getline(cin, phrase);
        if (phrase == "*") {
            break;
        }

        vector<string> words;
        word = "";
        for (int i = 0; i < phrase.size(); ++i) {
            if (phrase[i] == ' ') {
                if (!word.empty()) {
                    words.push_back(word);
                    word.clear();
                }
            } else {
                word.push_back(phrase[i]);
            }
        }
        if (!word.empty()) {
            words.push_back(word);
        }

        if (isTautogram(words)) {
            cout << "Y\n";
        } else {
            cout << "N\n";
        }
    }

    return 0;
}
