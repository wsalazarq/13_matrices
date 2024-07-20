#include <iostream>
using namespace std;

int main(){

    int n, m;
    cout<<"Ingrese el numero de partidos politicos: ";cin>>n;
    cout<<"Ingrese el numero de ciudades: ";cin>>m;
    
    string partidos [n];
    string ciudades [m];

    for (int i = 0; i < n; i++){
        cout<<"Ingrese el nombre del partido político "<<i + 1<<": ";cin>>partidos[i];
    }

    for (int i = 0; i < m; i++){
        cout<<"Ingrese el nombre de la ciudad "<<i + 1<<": ";cin>>ciudades[i];
    }
    
    int votos[n][m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; ++j) {
            cout<<"Ingrese los votos del partido "<<partidos[j]<<" en la ciudad "<<ciudades[i]<<": ";cin>>votos[i][j];
        }
    }    
}