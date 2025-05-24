#include <iostream>
using namespace std;

class Vehiculo {
public:
    void encender() {
        cout << "Vehículo encendido" << endl;
    }
};

class Coche : private Vehiculo {
public:
    void encenderVehiculo() {
        encender(); // accede al método heredado de forma interna
    }
};

int main() {
    Coche miCoche;
    miCoche.encenderVehiculo(); // ahora sí se puede llamar
    return 0;
}
