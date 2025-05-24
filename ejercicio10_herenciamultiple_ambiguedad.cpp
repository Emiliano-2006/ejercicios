#include <iostream>
using namespace std;

class A {
public:
    void imprimir() {
        cout << "A" << endl;
    }
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};

int main() {
    D obj;
    obj.imprimir(); // Ya no hay ambigüedad
    return 0;
}
