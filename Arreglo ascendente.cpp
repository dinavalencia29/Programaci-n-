#include <iostream>
#include <conio.h>  

using namespace std;

int main() {
    int numeros[10];

    // Captura de 10 números
    cout << "Ingrese 10 numeros:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (numeros[i] > numeros[j]) {
                // Intercambio
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    cout << "\nNumeros ordenados de forma ascendente:\n";
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}

