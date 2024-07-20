#include <iostream>
using namespace std;

int main() {
    float ventas[7][4];
    float totalSemanas[4];
    char dias[7] = {'L', 'M', 'M', 'J', 'V', 'S', 'D'};
    
    for (int semana = 0; semana < 4; ++semana) {
        for (int dia = 0; dia < 7; ++dia) {
            cout<<"Ingrese las ventas para el día "<<dias[dia]<<" de la semana "<< semana + 1<<": ";cin>>ventas[dia][semana];
        }
    }

    
    return 0;
}
