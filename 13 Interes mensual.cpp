#include <iostream>
#include <iomanip>  // Para usar fixed y setprecision
using namespace std;

int main() {
    double depositoMensual = 15000.0;        
    double tasaInteresMensual = 0.037;       
    int anios = 15;
    int meses = anios * 12;
    double totalAhorrado = 0.0;

    for (int i = 1; i <= meses; i++) {
        totalAhorrado = (totalAhorrado + depositoMensual) * (1 + tasaInteresMensual);
    }

    cout << fixed << setprecision(10); // Mostrar hasta 10 decimales
    cout << "Cantidad ahorrada despu s de " << anios << " a os: $" << totalAhorrado << endl;

    return 0;
}


