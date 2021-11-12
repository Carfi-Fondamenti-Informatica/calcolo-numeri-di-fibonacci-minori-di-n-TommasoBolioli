#include <iostream>
using namespace std;
int main() {

    int n = 0, i = 0, primo_numero = 1, secondo_numero = 0, numero_successivo = 0;
    cin >> n;

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
