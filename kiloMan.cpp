#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i){
        int t1;
        int tot = 0;
        std::cin >> t1;
        std::vector<int> shotList;
        std::vector<char> playList;
        for(int j = 0; j < t1; ++j){
            int shot;
            std::cin >> shot;
            shotList.push_back(shot);
        }
        for(int j = 0; j < t1; ++j){
            char play;
            std::cin >> play;
            playList.push_back(play);
        }
        for(int j = 0; j < t1; ++j){
            if(playList[j] == 'S' && shotList[j] <= 2){
                tot++;
            }else if(playList[j] == 'J' && shotList[j] > 2){
                tot++;
            }
        }
        std::cout << tot << std::endl;
    }
    return 0;
}