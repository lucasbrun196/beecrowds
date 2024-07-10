#include <iostream>
#include <vector>

using namespace std;

void simplify(int n, int d){
    int n1 = n;
    int d1 = d;
    bool nn = false;
    bool dn = false;
    if(d1 < 0){
        d1 = d1 * -1;
        dn = true;
    }
    if(n1 < 0){
        n1 = n1 * -1;
        nn = true;
    }
 
    vector<int> mdc_vec;
    int mdc = 1;
    int aux = 2;
    while(n1 != 1 || d1 != 1){
        if(n1 % aux != 0 && d1 % aux != 0){
            aux++;
        }else{
            if(n1 % aux == 0 && d1 % aux == 0){
                mdc_vec.push_back(aux);
                n1 = n1 / aux;
                d1 = d1 / aux;
            }else if(n1 % aux == 0){
                n1 = n1 / aux;
            }else if(d1 % aux == 0){
                d1 = d1 / aux;
            }
        }
    }
    if(dn){
        d1 = d1 * -1;
    }
    if(nn){
        n1 = n1 * -1;
    }
    cout << n << "/" << d;
    if(!mdc_vec.empty()){
        for(int i = 0; i < mdc_vec.size(); ++i){
            mdc*=mdc_vec[i];
        }
        cout << " = " << n/mdc << "/" << d/mdc << endl;
    }else{
        cout << " = " << n << "/" << d << endl;;
    }

}

void sumOp(const int n1, const int n2, const int d1, const int d2){
    int n = ((n1*d2) + (n2*d1));
    int d = (d1*d2);
    simplify(n, d);
}

void subOp(const int n1, const int n2, const int d1, const int d2){
    int n = ((n1*d2) - (n2*d1));
    int d = (d1*d2);
    simplify(n, d);
}
void mulOp(const int n1, const int n2, const int d1, const int d2){
    int n = n1 * n2;
    int d = d1*d2;
    simplify(n, d);
}
void divOp(const int n1, const int n2, const int d1, const int d2){
    int n = n1 * d2;
    int d = n2 * d1;
    simplify(n, d);
}

int main(){
    int n, n1, n2, d1, d2; cin >> n;
    char div1, div2,op;
    for(int i = 0; i < n; ++i){
        cin >> n1
        >> div1 >> d1
        >> op
        >> n2 >> div2
        >> d2;
        if(op == '+'){
            sumOp(n1, n2, d1, d2);
        }else if(op == '-'){
            subOp(n1, n2, d1, d2);
        }else if(op == '*'){
            mulOp(n1, n2, d1, d2);
        }else if(op == '/'){
            divOp(n1, n2, d1, d2);
        }
    }
    return 0;
}