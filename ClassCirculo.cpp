#include <cstdio>

class Circulo {
private:
    float radio;
    const float pi = 3.1416;

public:
    Circulo(float r) {
        radio = r;
    }

    float calcularArea() {
        return pi * radio * radio;
    }

    float calcularPerimetro() {
        return 2 * pi * radio;
    }
};

int main() {
    int opcion;
    float radio;

    printf("\nCalcula el area y perimetro del circulo");
    printf("\n1. Calcular el area del circulo");
    printf("\n2. Calcular el perimetro del circulo");
    printf("\nSelecciona una opcion (1 o 2): ");
    scanf("%d", &opcion);

    if (opcion == 1 || opcion == 2) {
        printf("Dame el radio: ");
        scanf("%f", &radio);

        Circulo c(radio);

        switch (opcion) {
            case 1:
                printf("Area: %.2f\n", c.calcularArea());
                break;
            case 2:
                printf("Perimetro: %.2f\n", c.calcularPerimetro());
                break;
        }
    } else {
        printf("\nOpcion invalida\n");
    }

    return 0;
}

