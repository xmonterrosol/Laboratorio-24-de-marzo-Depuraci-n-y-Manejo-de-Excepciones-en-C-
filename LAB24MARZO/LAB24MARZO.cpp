#include <iostream>
using namespace std;

// Función recursiva para calcular el n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;  // Caso base 1
    if (n == 1) return 1;  // Caso base 2
    return fibonacci(n - 1) + fibonacci(n - 2); // Llamadas recursivas
}

int fibonacci(int n) {
    if (n < 0) {
        throw invalid_argument("Error: No existe Fibonacci de un número negativo.");
    }
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "¿Cuántos números de Fibonacci deseas?: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}