//Andres Ruiz Velasco - Braulio Lopez
//Desplazamiento de bits


#include <iostream>
using namespace std;
int main() {
int numero1 = 4; //4 en binario es = 100
int numero2 = 1; //1 en binario es = 1
int numero3 = 2; //2 en binario es = 10

cout << "numero1 >> numero2:  " << (numero1 >> numero2) << endl; 
// Los numeros 1 del numero1 se recorren a la derecha segun el numero2


 cout << endl <<"numero3 << numero2:  " << (numero3 << numero2) << endl ;
// Los numeros 1 del numero1 se recorren a la izquierda segun el numero2
 
}