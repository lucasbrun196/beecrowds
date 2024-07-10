#include <iostream>
#include <vector>

using namespace std;

struct Shoe{
    int size;
    char side;
};

int main(){

    int n;
    while(cin >> n){
        vector<Shoe> shoes_vec;
        int sz;
        int contPairs = 0;
        char sd;
        Shoe shoe;
        for(int i = 0; i < n; ++i){
            cin >> sz >> sd;
            shoe.size = sz;
            shoe.side = sd;
            shoes_vec.push_back(shoe);
        }

        for(int i = 0; i < shoes_vec.size(); ++i){
            Shoe currentShoe = shoes_vec[i];
            for(int j = i + 1; j < shoes_vec.size(); ++j){
                Shoe nextShoe = shoes_vec[j];
                if(currentShoe.size == nextShoe.size && currentShoe.side != nextShoe.side){
                    contPairs++;
                    shoes_vec.erase(shoes_vec.begin() + j); // Remove the paired shoe
                    break;
                }
            }
        }
        cout << contPairs << endl;
    }

    return 0;
}
