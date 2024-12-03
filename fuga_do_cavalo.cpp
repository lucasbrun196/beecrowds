#include <iostream>
#include <vector>
#include <utility>
#include <map>

using namespace std;

int main(){
    map<char, int> charToPos;
    vector<pair<int, int> > horseMoves;
    vector<pair<int, int> > pawnMoves;
    charToPos['a'] = 1;
    charToPos['b'] = 2;
    charToPos['c'] = 3;
    charToPos['d'] = 4;
    charToPos['e'] = 5;
    charToPos['f'] = 6;
    charToPos['g'] = 7;
    charToPos['h'] = 8;
    horseMoves.push_back(make_pair(2, -1));
    horseMoves.push_back(make_pair(2, 1));
    horseMoves.push_back(make_pair(1, -2));
    horseMoves.push_back(make_pair(1, 2));
    horseMoves.push_back(make_pair(-1, 2));
    horseMoves.push_back(make_pair(-1, -2));
    horseMoves.push_back(make_pair(-2, 1));
    horseMoves.push_back(make_pair(-2, -1));
    pawnMoves.push_back(make_pair(-1, 1));
    pawnMoves.push_back(make_pair(-1, -1));
    
    
    string cases, horse;
    int contCases = 1;
    while(true){
        cin >> cases;
        if(cases == "0") break;
        int contMoves = 0;
        vector<string> tab;
        tab.push_back(cases);
        for(int i = 0; i < 8; ++i){
            cin >> cases;
            tab.push_back(cases);
        }
        horse = tab[0];
        int horseLine = horse[0] - '0';
        int horseColumn = charToPos[horse[1]];
        for(auto pairH : horseMoves){
            bool isValid = true;
            int horseAndMoveLine = horseLine + (pairH.first);
            int horseAndMoveColumn = horseColumn + (pairH.second);
            if(((horseAndMoveLine >= 1) && (horseAndMoveLine <= 8)) && ((horseAndMoveColumn >= 1) && (horseAndMoveColumn <= 8))){
                for(int i = 1; i < tab.size(); ++i){
                    int pawnLine = tab[i][0] - '0';
                    int pawnColumn = charToPos[tab[i][1]];
                    if(pawnLine > horseAndMoveLine){
                        for(auto pairP : pawnMoves){
                            if((pawnLine + (pairP.first) == horseAndMoveLine) && (pawnColumn + (pairP.second) == horseAndMoveColumn)) isValid = false;
                        }
                    }
                }
            }else isValid = false;
            if(isValid == true) contMoves++;
        }
        cout << "Caso de Teste #" << contCases << ": " << contMoves << " movimento(s).\n";
        contCases++;
    }


    return 0;
}
