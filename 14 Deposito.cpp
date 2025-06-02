#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double depositoMensual = 1000.0;         // Monto depositado cada mes
    double tasaInteresMensual = 0.03;        // 3% mensual
    int anios = 10;
    int meses = anios * 12;
    double totalAhorrado = 0.0;

    for (int i = 1; i <= meses; i++) {
        totalAhorrado = (totalAhorrado + depositoMensual) * (1 + tasaInteresMensual);
    }

    cout << "Cantidad ahorrada despues de " << anios << " years: $" << totalAhorrado << endl;

    return 0;
}
