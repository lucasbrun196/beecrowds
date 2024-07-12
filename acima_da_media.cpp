#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

    double perc, media_turma, tot_notas, notas_maiores, media_maiores;
    int cases, students, nt, cont;
    cin >> cases;
    while(cases--){
        notas_maiores = 0.0;
        vector<int> notas;
        tot_notas = 0.0;
        cin >> students;
        cont = 0;
        while(cont < students){
            cin >> nt;
            notas.push_back(nt);
            tot_notas += nt;
            cont++;
        }
        cont = 0;
        media_turma = tot_notas / students;
        for(int nota: notas){
            if(nota > media_turma){
                notas_maiores++;
            }
        }
        media_maiores = students - notas_maiores;
        media_maiores = (media_maiores / students) * 100.00;
        media_maiores = 100 - media_maiores;
        cout << fixed << setprecision(3) << media_maiores << "%\n";
    }

    return 0;
}