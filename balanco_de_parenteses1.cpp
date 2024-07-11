#include <iostream>
#include <stack>

using namespace std;

int main(){

    string operation;
    while(cin >> operation){
        stack<char> chars_queue;
        stack<char> aux;
        for(char ch: operation){
            chars_queue.push(ch);
        }
        bool isCorrect = true;

        while(!chars_queue.empty() && isCorrect == true){
            isCorrect = chars_queue.top() == '(' ? false : true;
            if(chars_queue.top() == ')'){
                chars_queue.pop();
                bool find = false;
                while(find == false && !chars_queue.empty()){
                    find = chars_queue.top() == '(' ? true : false;
                    if(chars_queue.top() != '('){
                        aux.push(chars_queue.top());
                    }
                    chars_queue.pop();
                }
                if(find == true){
                    isCorrect = true;
                    while(!aux.empty()){
                        chars_queue.push(aux.top());
                        aux.pop();
                    } 
                }else{
                    isCorrect = false;
                }
            }else{
                chars_queue.pop();
            }
        }
        isCorrect == true ? cout << "correct\n" : cout << "incorrect\n";
    }

    return 0;
}