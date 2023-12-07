#include <iostream>


/* Third partial exam
Andres Ruiz Velasco - Braulio Lopez
27/10/2023
First code
*/
#define Q 8  // Número de bits para la parte fraccionaria
#define ONE (1 << Q)
using namespace std;

int toQ8_8(double num) {
    return static_cast<int>(num * ONE);
}


double toDecimal(int qNumber) {
    return static_cast<double>(qNumber) / ONE;
}

int main() {
    
    int num1 = toQ8_8(50.625);

    
    int num2 = toQ8_8(26.50390625);

  l
    int suma = num1 + num2;
    double sumaDecimal = toDecimal(suma);

    // Imprimir resultados
   cout << "representation de 50.625 en formato Q8.8: " << toDecimal(num1) << endl;
    cout << "representation de 26.50390625 in format Q8.8: " << toDecimal(num2) << std::endl;
    std::cout << "addition in format Q8.8: " << toDecimal(suma) <<endl;
    cout << "addition   in format decimal: " << sumaDecimal << endl;

    return 0;
}
