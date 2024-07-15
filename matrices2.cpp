#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Ingrese el tamaño de la matriz cuadrada: ";cin>>n;

    int matriz[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<"Ingrese el valor de la posicion ["<<i+1<<"]"<<"["<<j+1<<"]";cin>>matriz[i][j];
        }
    }

    return 0;
}