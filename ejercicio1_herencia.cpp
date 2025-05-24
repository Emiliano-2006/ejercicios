#include <iostream>
using namespace std;

class Animal {
public:
    void comer() {
        cout << "El animal está comiendo." << endl;
    }
};

class Perro : public Animal {
public:
    void ladrar() {
        cout << "El perro está ladrando: ¡Guau guau!" << endl;
    }
};

int main() {
    Perro miPerro;
    miPerro.comer();
    miPerro.ladrar();
    return 0;
}
