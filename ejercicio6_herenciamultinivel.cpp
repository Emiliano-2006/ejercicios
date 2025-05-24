#include <iostream>
using namespace std;

// Clase base
class Usuario {
public:
    void login() {
        cout << "Usuario ha iniciado sesión." << endl;
    }
};

// Clase derivada de Usuario
class Moderador : public Usuario {
public:
    void moderar() {
        cout << "Moderador está revisando contenido." << endl;
    }
};

// Clase derivada de Moderador
class Admin : public Moderador {
public:
    void banear() {
        cout << "Admin ha baneado a un usuario." << endl;
    }
};

int main() {
    Admin administrador;
    administrador.login();     
    administrador.moderar();   
    administrador.banear();    
    return 0;
}
