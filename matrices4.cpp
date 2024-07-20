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

    float totalMes = 0;
    for (int semana = 0; semana < 4; ++semana) {
        for (int dia = 0; dia < 7; ++dia) {
            totalSemanas[semana] += ventas[dia][semana];
        }

        totalMes += totalSemanas[semana];
    }

    cout<<"Ventas de cuatro semanas"<<endl;
    cout<<"----------------------------------"<<endl;
    cout << "     SEM1  SEM2  SEM3  SEM4"<<endl;

    for (int dia = 0; dia < 7; ++dia) {
        cout<<"("<<dias[dia]<<")";
        for (int semana = 0; semana < 4; ++semana) {
            cout<<"   "<<ventas[dia][semana];
        }
        cout << endl;
    }

    cout<<"----------------------------------"<<endl;
    for (int semana = 0; semana < 4; ++semana) {
        cout<<totalSemanas[semana]<<"  ";
    }
    cout<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Venta total del mes: "<<totalMes<<endl;

    return 0;
}
