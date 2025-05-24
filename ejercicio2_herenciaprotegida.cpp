#include <iostream>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
};

class Empleado : protected Persona {
public:
    // Constructor para asignar valores
    Empleado(string nom, int ed) {
        nombre = nom;
        edad = ed;
    }

    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};

int main() {
    Empleado emp("Emiliano", 18);
    emp.mostrarDatos();
    return 0;
}
