#include <iostream>

 using namespace std;
 int main(){

    int numeros[100], suma=0;

    for(int i = 0; i < 100; i++){ 
        numeros[i] = i+1;
        suma = suma + numeros[i];
        
    }

    cout << "El resultado de toda la suma de los numero del 1 al 100 es: "<< suma << "\n";

    return 0;
 }