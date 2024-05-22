#include <iostream>

 using namespace std;
 int main(){

    string nombres[5];

    for(int i=0; i<5; i++){

        cout << "Introduzca el nombre "<< i+1 << " :\n";
        cin >> nombres[i];
    }

    for(int j=0; j<5; j++){

        cout << "El nombre " <<j+1<<" es : " << nombres[j]<< "\n";
    }
    

    return 0;
 }