#include <iostream>
using namespace std;

class Dispositivo {
public:
    string marca;
};

class TV : virtual public Dispositivo {
    // Puede tener otros métodos propios
};

class DVD : virtual public Dispositivo {
    // Puede tener otros métodos propios
};

class ControlRemoto : public TV, public DVD {
public:
    void mostrarMarca() {
        cout << "Marca del dispositivo: " << marca << endl;
    }
};

int main() {
    ControlRemoto cr;
    cr.marca = "Samsung";
    cr.mostrarMarca();
    return 0;
}
