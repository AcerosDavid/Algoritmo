#include <iostream>
using namespace std;

int main() {
    double temperatura;
    char escala;

    cout << "Ingrese la temperatura: ";
    cin >> temperatura;

    cout << "Ingrese la escala de temperatura (C, F, K): ";
    cin >> escala;

    double celsius, fahrenheit, kelvin;

    switch (escala) {
        case 'C':
        case 'c':
            celsius = temperatura;
            fahrenheit = (temperatura * 9 / 5) + 32;
            kelvin = temperatura + 273.15;
            break;

        case 'F':
        case 'f':
            fahrenheit = temperatura;
            celsius = (temperatura - 32) * 5 / 9;
            kelvin = (temperatura + 459.67) * 5 / 9;
            break;

        case 'K':
        case 'k':
            kelvin = temperatura;
            celsius = temperatura - 273.15;
            fahrenheit = (temperatura * 9 / 5) - 459.67;
            break;

        default:
            cout << "Escala de temperatura no válida." << endl;
            return 1;
    }

    cout << "Temperatura en Celsius: " << celsius << " °C" << endl;
    cout << "Temperatura en Fahrenheit: " << fahrenheit << " °F" << endl;
    cout << "Temperatura en Kelvin: " << kelvin << " K" << endl;

    return 0;
}
