#include <iostream>
using namespace std;
int main() {

    int n = 0, i = 0, primo_numero = 1, secondo_numero = 0, numero_successivo = 0;
    cin >> n;

/*I comandi per la serie di fibonacci sono gli stessi  dell'esercitazione 4, ma per rispettare
 * la consegna è stata aggiunta la struttura condizionale if che blocca la stampa a video se il risultato
 * della serie è maggiore del numero n in ingresso*/

if(n==1){
    cout << primo_numero << endl;
    cout << primo_numero << endl;

}else{
            for (i = 0; i < n; i++) {
                numero_successivo = primo_numero + secondo_numero;
                primo_numero = secondo_numero;
            secondo_numero = numero_successivo;
            if(numero_successivo<= n){
                cout << numero_successivo << endl;}
    }}}
