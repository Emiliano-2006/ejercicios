#include <iostream>
using namespace std;

// Clase base 1
class ReproductorAudio {
public:
    void reproducir() {
        cout << "Reproduciendo audio..." << endl;
    }
};

// Clase base 2
class ReproductorVideo {
public:
    void mostrar() {
        cout << "Mostrando video..." << endl;
    }
};

// Clase derivada con herencia múltiple
class ReproductorMultimedia : public ReproductorAudio, public ReproductorVideo {
    // No necesita implementar nada si solo usa los métodos heredados
};

int main() {
    ReproductorMultimedia rm;
    rm.reproducir();  // método de ReproductorAudio
    rm.mostrar();     // método de ReproductorVideo

    return 0;
}
