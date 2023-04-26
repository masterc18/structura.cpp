#include <iostream>
#include "estructura.h"
#include <string.h>

#define MAX 100
using namespace std;
int pos = 0;
categoria categorias[MAX];
/*CRUD
C Crear
R leer
U actualizar
D eliminar*/
void agregarCategoria(int id, char nombre[]);
void mostrarCategoria(int i);
void mostrarCategorias();
bool existeCategoria(int id);
void eliminarCategoria(int id);
void editarCategoria(int id, char nombre);
void reordenar();

void agregarCategoria(int id, char nombre[], )
{

    categorias[pos].idCat = id;
    strcpy(categorias[pos].nombre, nombre);
    pos++
}

void mostrarCategoria(int i)
{

    cout << "ID " << categorias[i].idCat << endl;
    cout << "Nombre " << categorias[i].nombre << endl;
}

void mostrarCategorias();
for (int i; i < pos; i++)
{

    cout << "ID " << categorias[i].idCat << endl;
    cout << "Nombre " << categorias[i].nombre << endl;
}

bool existeCategoria(int id)
{
    bool existe = false;
    int i = 0;
    while (i < pos)
    {
        if (categorias[i] == id)
        {
            existe = true;
            break;
        }
        i++;
    }
    return existe;
}

void eliminarCategoria(int id){
    if(existeCategoria(id)){


    }else{
        cout << "Errror: NO EXISTE EL CODIGO INDICADO " << endl;
    }
}

void reordenar(int id){
    for(int i=0; i < pos; i++)
}