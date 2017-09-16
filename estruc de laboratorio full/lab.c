#include <stdio.h>
#include <stdlib.h>
#include "lab.h"
#include <string.h>
#include <conio.h>

void inicializarMedicamentos(eMedicamento , int M)
{
    int codigo[]={1,2,3,4,5};
    char descrip[][100]={"valium","ibu","seretide","aspirina","diclo"};
    float precio[]={155,76,352,14.50,166.25};
    int idLab[]={1,2,3};
    int stock[]={15,21,35,44,2};

}

void inicializarLaboratorio(eLaboratorio , int L)
{
    int idLab[]={1,2,3};
    char nombreLab[][100]={"bago","roemmers","bayer"};
    char direccionLab[][100]={"mitre","belgrano","sarmiento"};
    char telefonoLab[][100]={"15653822","1145301898","42012254"};

}
void inicializarCliente(eCliente , int C)
{
    int idCliente[]={0,1,2,3,4,5,6,7,8,9};
    char nombreCliente[][100]={"raul","whashintong","aldo","nedved","caruso","ash","piccolo","sasha","morgana","gulses"};
    int codigo[]={1,2,3,4,5};
}

/*void mostrarListaMedicamento(eMedicamento[],MEDIC)
{
    int i;
    for(i=0;i<MEDIC;i++)
    {
        if(eMedicamento[i])
    }
}*/

void mostrarCliente(eCliente cli)
{
    printf("%d--%s--%d\n", cli.idCliente,cli.nombre,cli.codigo);
}

