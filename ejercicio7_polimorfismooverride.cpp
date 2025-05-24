#include <iostream>
using namespace std;

class Instrumento {
public:
    virtual void tocar() {
        cout << "Tocando un instrumento genérico." << endl;
    }
};

class Guitarra : public Instrumento {
public:
    void tocar() override {
        cout << "Tocando una guitarra: 🎸" << endl;
    }
};

void probar(Instrumento* inst) {
    inst->tocar();
}

int main() {
    Guitarra g;
    probar(&g); 
    return 0;
}
