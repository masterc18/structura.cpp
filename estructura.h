/*regitro de productos*/
#define MAX 100

typedef struct 
{
    int idCat;
    char nombre[30];
}categoria;

categoria categorias[MAX];

typedef struct 
{
    int cant2;
    int id;
    char nombre[30];
    char desc[200];
    float precio;

}Producto;

Producto producto[MAX];
