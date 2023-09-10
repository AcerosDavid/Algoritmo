#include <iostream>
using namespace std;

int main() {
    double primera_nota, segunda_nota, tercera_nota, examen_nota;
    double primer_previo, segundo_previo, tercer_previo, examen_final;
    double promedio_total;

    cout << "Ingrese la nota del primer previo: ";
    cin >> primera_nota;

    cout << "Ingrese la nota del segundo previo: ";
    cin >> segunda_nota;

    cout << "Ingrese la nota de la tercera nota: ";
    cin >> tercera_nota;

    cout << "Ingrese la nota del examen final: ";
    cin >> examen_nota;

    primer_previo = primera_nota * (25.0 / 100);
    segundo_previo = segunda_nota * (25.0 / 100);
    tercer_previo = tercera_nota * (20.0 / 100);
    examen_final = examen_nota * (30.0 / 100);

    promedio_total = primer_previo + segundo_previo + tercer_previo + examen_final;

    cout << "Su promedio total es: " << promedio_total << endl;

    return 0;
}
