#include <iostream>

 using namespace std;
 int main(){

    float notas[6], promedio=0.00;

    for(int i=0; i<6; i++){

        do{
            cout << "Por favor introdcuir sus 6 notas. \n";
        cout << "Introducir su nota " << i+1 << " :\n";
        cin >> notas[i];
        promedio = promedio + notas[i];

        }
        while(notas[i]<0 || notas[i]>10);
    }

    for(int j=0; j<6; j++){

        cout<< "Sus nota "<<j+1<< " ha sido : "<< notas[j]<<"\n";
    }

    cout<< "Su promedio a sido de: " << promedio/6;

    return 0;
 }