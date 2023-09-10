#include <iostream>
using namespace std;

int main() {
    int notas_Recolectadas;
    double suma_Total = 0.0;

    cout << "Escribe el número de notas recolectadas: ";
    cin >> notas_Recolectadas;

    for (int i = 1; i <= notas_Recolectadas; i++) {
        double valor_Nota;
        
        cout << "Cuánto es el valor de la nota número " << i << ": ";
        cin >> valor_Nota;

        suma_Total += valor_Nota;
    }

    double promedio_Notas = suma_Total / notas_Recolectadas;

    cout << "El promedio total es: " << promedio_Notas << endl;
    cout << "El porcentaje del valor de la tercera nota en la FESC es: " << promedio_Notas * (20.0/100) << "%" << endl;

    return 0;
}
