#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main(){

    int nb, nn, valor_reserva, banco_devedor, banco_credor, valor_a_ser_pago;
    bool liquida;

    while(true){
        cin >> nb >> nn;
        if(nb == 0 && nn == 0) break;
        vi reserva;
        for(int i = 0; i < nb; ++i){
            cin >> valor_reserva;
            reserva.push_back(valor_reserva);
        }
        for(int i = 0; i < nn; ++i){
            cin >> banco_devedor >> banco_credor >> valor_a_ser_pago;
            reserva[banco_devedor-1] -= valor_a_ser_pago;
            reserva[banco_credor-1] += valor_a_ser_pago;
        }
        liquida = true;
        for(int const &e: reserva){
            if(e < 0){
                liquida = false;
                break;
            }
        }
        if(liquida == true){
            cout << "S\n";
        }else{
            cout << "N\n";
        }
            
    }

    return 0;
}