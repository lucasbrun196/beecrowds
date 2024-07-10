#include <stack>
#include <iostream>
#include <vector>

int main(){
    while(true){
        int n;
        std::cin >> n;
        if(n == 0) break;
        std::stack<int> cardsStack;
        std::stack<int> cardsStackAux;
        std::vector<int> discards;
        for(int i = n; i > 0; --i){
            cardsStack.push(i);
        }
        while(cardsStack.size() != 1){
            discards.push_back(cardsStack.top());
            cardsStack.pop();
            int aux = cardsStack.top();
            cardsStack.pop();
            while(!cardsStack.empty()){
                cardsStackAux.push(cardsStack.top());
                cardsStack.pop();
            }
            cardsStack.push(aux);
            while(!cardsStackAux.empty()){
                cardsStack.push(cardsStackAux.top());
                cardsStackAux.pop();
            }
        }
        std::cout << "Discarded cards: ";
        for(int i = 0; i < discards.size(); ++i){
            std::cout << discards[i]; 
            if(i != discards.size() -1){
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
        std::cout << "Remaining card: " << cardsStack.top() << std::endl;
    }
    return 0;
}