#include <iostream>
#include <conio.h>  // Solo para getch()

using namespace std;

// Clase base
class Animal {
protected:
    bool mamifero;
    bool oviparo;
    bool vertebrado;
    bool invertebrado;

public:
    Animal(bool m, bool o, bool v, bool inv)
        : mamifero(m), oviparo(o), vertebrado(v), invertebrado(inv) {}

    void mostrarCaracteristicas() {
        cout << "Mamifero: " << (mamifero ? "Si" : "No") << endl;
        cout << "Oviparo: " << (oviparo ? "Si" : "No") << endl;
        cout << "Vertebrado: " << (vertebrado ? "Si" : "No") << endl;
        cout << "Invertebrado: " << (invertebrado ? "Si" : "No") << endl;
    }

    virtual void comer() {
        cout << "El animal come" << endl;
    }
};

// Clase derivada Serpiente
class Serpiente : public Animal {
public:
    Serpiente() : Animal(false, true, true, false) {}

    void ponerHuevo() {
        cout << "La serpiente pone huevos" << endl;
    }

    void comer() override {
        cout << "La serpiente caza y come roedores" << endl;
    }
};

// Clase derivada León
class Leon : public Animal {
public:
    Leon() : Animal(true, false, true, false) {}

    void dormir() {
        cout << "El leon duerme bajo la sombra" << endl;
    }

    void comer() override {
        cout << "El leon come carne" << endl;
    }
};

// Clase derivada Insecto
class Insecto : public Animal {
public:
    Insecto() : Animal(false, true, false, true) {}

    void volar() {
        cout << "El insecto vuela" << endl;
    }

    void comer() override {
        cout << "El insecto se alimenta de nectar" << endl;
    }
};

// Función principal
int main() {
    Serpiente s;
    cout << "Serpiente:" << endl;
    s.mostrarCaracteristicas();
    s.comer();
    s.ponerHuevo();

    cout << "\nLeon:" << endl;
    Leon l;
    l.mostrarCaracteristicas();
    l.comer();
    l.dormir();

    cout << "\nInsecto:" << endl;
    Insecto i;
    i.mostrarCaracteristicas();
    i.comer();
    i.volar();

    getch();  // Espera una tecla antes de cerrar
    return 0;
}

