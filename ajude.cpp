#include <iostream>
#include <vector>


using namespace std;

struct Problem{
    int temp;
    string key, status;
};

int main(){



    while(true){
        int n;
        cin >> n;
        if(n == 0){
            break;
        }
        int correct = 0;
        int totTemp = 0;
        Problem problem;
        vector<Problem> problemVector;
        for(int i = 0; i < n; ++i){
            string prob, status;
            int temp;
            cin >> prob;
            cin >> temp;
            cin >> status;
            problem.key = prob;
            problem.status = status;
            problem.temp = temp;
            problemVector.push_back(problem);
        }
        for(int i = 0; i < problemVector.size(); ++i){
            if(problemVector[i].status == "correct"){
                correct ++;
                totTemp += problemVector[i].temp;
                for(int j = 0; j < problemVector.size(); j++){
                    if(problemVector[j].status == "incorrect" && problemVector[j].key == problemVector[i].key){
                        totTemp += 20;
                    }
                }
            }
        }
        cout << correct << " " << totTemp << endl;
    }
    return 0;
}