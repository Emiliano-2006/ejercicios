#include <iostream>
using namespace std;

class Persona {
protected:
    string nombre;
};

class Cliente : protected Persona {
public:
    Cliente(string nom) {
        nombre = nom; // acceso válido porque es protected
    }

    void mostrar() {
        cout << "Nombre del cliente: " << nombre << endl;
    }
};

int main() {
    Cliente c("Emiliano");
    c.mostrar();
    return 0;
}
