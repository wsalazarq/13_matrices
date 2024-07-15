#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Ingrese el tamaño de la matriz: ";cin >> n;

    int filas = n;
    int columnas = 3 * n;
    int matriz[filas][columnas];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
       
            if (i == 0 || i == filas - 1 || j == 0 || j == columnas - 1){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
