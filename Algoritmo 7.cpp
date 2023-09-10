#include <iostream>
using namespace std;

int main() {
    double pesoLibras;
    double pesoKilogramos, pesoGramos;

    cout << "Ingrese el peso en libras: ";
    cin >> pesoLibras;

    // Convertir libras a kilogramos
    pesoKilogramos = pesoLibras * 0.46;

    // Convertir kilogramos a gramos
    pesoGramos = pesoKilogramos * 1000;

    cout << "El peso en kilogramos es: " << pesoKilogramos << " kg" << endl;
    cout << "El peso en gramos es: " << pesoGramos << " g" << endl;

    return 0;
}
