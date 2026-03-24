#include <iostream>
using namespace std;

int main() {
    cout << "Calculadora Simples\n";
    cout << "Digite o primeiro numero: ";

    int n1, n2;
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;
    cout << "Soma: " << n1 + n2 << endl;
    cout << "Subtracao: " << n1 - n2 << endl;
    cout << "Multiplicacao: " << n1 * n2 << endl;
    if (n2 != 0) {
        cout << "Divisao: " << n1 / n2 << endl;
    } else {
        cout << "Divisao: Impossivel dividir por zero!" << endl;
    }
    cout << "Fim da calculadora!\n";
    return 0;
}