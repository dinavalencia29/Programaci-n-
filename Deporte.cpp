#include <iostream>
#include <conio.h>

using namespace std;

// Clase base
class Deporte {
protected:
    string nombre;
    int numeroJugadores;
    bool usaBalon;

public:
    Deporte(string n, int jugadores, bool balon)
        : nombre(n), numeroJugadores(jugadores), usaBalon(balon) {}

    void mostrarInformacion() {
        cout << "Deporte: " << nombre << endl;
        cout << "Jugadores por equipo: " << numeroJugadores << endl;
        cout << "Usa balon: " << (usaBalon ? "Si" : "No") << endl;
    }

    virtual void formaDeJugar() {
        cout << "Se juega de una forma general." << endl;
    }
};

// Clase derivada Fútbol
class Futbol : public Deporte {
public:
    Futbol() : Deporte("Futbol", 11, true) {}

    void formaDeJugar() override {
        cout << "Se juega con los pies." << endl;
    }
};

// Clase derivada Baloncesto
class Baloncesto : public Deporte {
public:
    Baloncesto() : Deporte("Baloncesto", 5, true) {}

    void formaDeJugar() override {
        cout << "Se juega con las manos." << endl;
    }
};

// Clase derivada Waterpolo
class Waterpolo : public Deporte {
public:
    Waterpolo() : Deporte("Waterpolo", 7, true) {}

    void formaDeJugar() override {
        cout << "Se juega con las manos y se nada." << endl;
    }
};

// Clase derivada Voleibol
class Voleibol : public Deporte {
public:
    Voleibol() : Deporte("Voleibol", 6, true) {}

    void formaDeJugar() override {
        cout << "Se juega con las manos y los brazos." << endl;
    }
};

// Función principal
int main() {
    Futbol f;
    cout << "Futbol:" << endl;
    f.mostrarInformacion();
    f.formaDeJugar();

    cout << "\nBaloncesto:" << endl;
    Baloncesto b;
    b.mostrarInformacion();
    b.formaDeJugar();

    cout << "\nWaterpolo:" << endl;
    Waterpolo w;
    w.mostrarInformacion();
    w.formaDeJugar();

    cout << "\nVoleibol:" << endl;
    Voleibol v;
    v.mostrarInformacion();
    v.formaDeJugar();

    getch();  // Espera una tecla antes de cerrar
    return 0;
}

