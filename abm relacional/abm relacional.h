#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
}eFecha

typedef struct
{
    int codigo;
    char descrip[100];
    float precio;
    int idLab;
    int stock;
    eFecha elaboracion;
    eFecha venci;
}eMedicamento

typedef struct
{
    int idLab;
    char nombre[100];
    char direccion[100];
    char telefono[100];
}eLaboratorio

typedef struct
{
    int idCliente;
    char nombre[100];
    int codigo;
}eCliente
