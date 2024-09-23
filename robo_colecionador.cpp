#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n, m, s, totFig, initX, initY;
    char orientation;
    string instructions, lineField;
    vector<string> vecField;
    bool findInitOrientation;
    


    while(true){
        cin >> n >> m >> s;
        if(n == 0 && m == 0 && s == 0) break;
        vecField.clear();
        totFig = 0; 
        for(int i = 0; i < n; ++i){
            cin >> lineField;
            vecField.push_back(lineField);
        }
        findInitOrientation = false;
        for(int i = 0; i < vecField.size(); ++i){
            for(int j = 0; j < vecField[i].size(); ++j){
                if(vecField[i][j] == 'N' || vecField[i][j] == 'S' || vecField[i][j] == 'L' || vecField[i][j] == 'O'){
                    initX = i;
                    initY = j;
                    orientation = vecField[i][j];
                    findInitOrientation = true;
                    break;
                }
            }
            if(findInitOrientation == true) break;
        }
        cin >> instructions;
        for(int i = 0; i < s; ++i){
            if(instructions[i] == 'D' && orientation == 'O'){
                orientation = 'N';
            }else if(instructions[i] == 'E' && orientation == 'O'){
                orientation = 'S';
            }else if((instructions[i] == 'E' && orientation == 'N')){
                orientation = 'O';
            }else if(instructions[i] == 'D' && orientation == 'N'){
                orientation = 'L';
            }else if(instructions[i] == 'E' && orientation == 'S'){
                orientation = 'L';
            }else if(instructions[i] == 'E' && orientation == 'L'){
                orientation = 'N';
            }else if(instructions[i] == 'D' && orientation == 'L'){
                orientation = 'S';
            }else if(instructions[i] == 'D' && orientation == 'S'){
                orientation = 'O';
            }else{
                if(orientation == 'O' && initY != 0 && vecField[initX][initY-1] != '#'){
                    initY--;
                }else if(orientation == 'L' && initY != m-1 && vecField[initX][initY+1] != '#'){
                    initY++;
                }else if(orientation == 'S' && initX != n-1 && vecField[initX+1][initY] != '#'){
                    initX++;
                }else if(orientation == 'N' && initX != 0 && vecField[initX-1][initY] != '#'){
                    initX--;
                }
            }
            if(vecField[initX][initY] == '*'){
                vecField[initX][initY] = '.';
                totFig++;
            }
        }
        cout << totFig << endl;
        
    }

    return 0;
}