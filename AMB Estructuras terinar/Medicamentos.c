#include <stdio.h>
#include "Medicamentos.h"

void cargarMedicamentos(eMedicamento lista[], int t)
{
    int i;
     for(i=0; i<t; i++)
    {
        if(lista[i].estado==0)
        {
            printf("Ingrese codigo: ");
            scanf("%d", &lista[i].codigo);
            printf("Ingrese descripcion: ");
            fflush(stdin);
            gets(lista[i].descripcion);
            printf("Ingrese precio: ");
            scanf("%f", &lista[i].precio);
            printf("Ingrese laboratorio: ");
            fflush(stdin);
            gets(lista[i].laboratorio);

            lista[i].estado = 1;

            break;
        }

    }
}
void mostraTodosMedicamentos(eMedicamento lista[], int t)
{
    int i;
    for(i=0; i<t; i++)
    {
        if(lista[i].estado==1)
        {
            mostrarMedicamento(lista[i]);
        }

    }
}
void mostrarMedicamento(eMedicamento med)
{
    printf("%d--%s--%f--%s\n", med.codigo, med.descripcion, med.precio, med.laboratorio);
}

void ordenarMedicamentos(eMedicamento lista[], int tam)
{
    int i, j;
    eMedicamento auxMedicamento;

    for(i=0; i<tam-1; i++)
    {

        for(j=i+1; j<tam; j++)
        {

            if(stricmp(lista[i].descripcion, lista[j].descripcion)>0)
            {
                auxMedicamento=lista[i];
                lista[i]=lista[j];
                lista[j]=auxMedicamento;

            }
            else
            {
                if(stricmp(lista[i].laboratorio,lista[j].laboratorio)==0)
                {
                    if(stricmp(lista[i].descripcion,lista[j].descripcion)>0)
                    {
                        auxMedicamento=lista[i];
                        lista[i]=lista[j];
                        lista[j]=auxMedicamento;
                    }
                }
            }
        }
    }
}

void inicializarMedicamentos(eMedicamento lista[], int tam)//hardcodear
{
    int codigo[]={1,2,3,4,5};
    char descripcion[][50]={"Valium","Ibuprofeno","Diclofenac","ceretide","omeprasol"};
    float precio[]={5,10,7,8,7};
    char laboratorio[][30]={"Bago","Bayer","Roemer","montpellier","Bago"};
    int estado[]={1,1,1,1,1};

    int i;

    for(i=0; i<tam; i++)
    {
        lista[i].codigo = codigo[i];
        lista[i].precio = precio[i];
        lista[i].estado = estado[i];
        strcpy(lista[i].descripcion,descripcion[i]);
        strcpy(lista[i].laboratorio,laboratorio[i]);
    }

}
   void modificarMedicamentos(eMedicamento lista[],int TAM)
    {
        int auxInt;
        int i;
        int flag=0;
        char respuesta;
        char auxString[50];

        printf("ingrese codigo a modificar: ");
        scanf("%d", &auxInt);

    for(i=0 ; i<TAM ;i++)
        {
          if(auxInt==lista[i].codigo)
           {
               flag=1;
               mostrarMedicamento(lista[i]);

            printf("ingrese nombre de laboratorio:");
            fflush(stdin);
            gets(auxString);
            printf("¿seguro que desea realizar el cambio?");
            respuesta=getche();
                if(respuesta=='s')
                {
                    printf("\n");
                    strcpy(lista[i].laboratorio,auxString);
                }
                else
                {
                    printf("accion cancelada\n");
                }
           break;
           }

        }


        if(flag==0)
        {
            printf("no existe codigo");
        }
    }
