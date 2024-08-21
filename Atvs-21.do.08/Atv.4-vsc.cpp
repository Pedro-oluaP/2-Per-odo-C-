#include <iostream>
using namespace std;

double fahrenheitParaCelsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
    cout << "Conversao de Fahrenheit para Celsius:\n";
    for (int fahrenheit = 0; fahrenheit <= 100; ++fahrenheit) {
        double celsius = fahrenheitParaCelsius(fahrenheit);
        cout << fahrenheit << "°F = " << celsius << "°C\n";
    }

    return 0;
}
