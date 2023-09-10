#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese un número n: ";
    cin >> n;
    
    cout << "Su listado del 1 al " << n << " es:" << endl;

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
