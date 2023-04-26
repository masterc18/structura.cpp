#include <iostream>
#include "estructura.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int cant;
    cout << "Dime cuantas categorias deseas agregar: " << endl;
    cin >> cant;
    for (int i = 0; i < cant; i++)
    {
        cout << "Ingrese el id: " << endl;
        cin >> categorias[i].idCat;
        cout << "Ingrese el nombre: " << endl;
        cin >> categorias[i].nombre;
    }
    cout << endl;
    cout << "Mostrar categorias " << endl;
    cout << "============================================= " << endl;
    for (int i = 0; i < cant; i++)
    {
        cout << "ID: " << categorias[i].idCat << endl;
        cout << "Nombre " << categorias[i].nombre << endl;
        cout << "============================================== " << endl;
    }
    for (int i = 0; i < cant; i++)
    {

        cout << "Ingrese el id: " << endl;
        cin >> producto[i].id;
        cout << "Ingrese el nombre: " << endl;
        cout << producto[i].nombre;
        cout << "Ingrese la descripcion: " << endl;
        cin >> producto[i].desc;
        cout << "Dime el precio del producto " << endl;
        cin >> producto[i].precio << endl;


    }
    cout << endl;
    cout << "Mostrar productos " << endl,
    cout << "============================================ " << endl;
    for(int i = 0; i < cant; i++){

        cout << "ID " << producto[i].id;
        cout << "Nombre " << producto[i].nombre;
        cout << "Descripcion " << producto[i].desc;
        cout << "precio " << producto[i].precio;
    }

    return 0;
}
