#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Ingrese el valor de n: ";cin>>n;
    int matriz[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<"Ingrese el valor de la posicion ["<<i+1<<"]"<<"["<<j+1<<"]";cin>>matriz[i][j];
        }
    }
    
    int suma = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            suma = suma + matriz[i][j];
        }
    }

    cout<<"La suma es: "<<suma;

    return 0;
}