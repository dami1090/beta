#include <stdio.h>
#include <stdlib.h>
#include "lab.h"
#include <string.h>
#include <conio.h>
#define MEDIC 5
#define CLIENTE 10
#define LAG 3
int main()
{
    int opcion;

   eLaboratorio listaLaboratorio[LAG];
   eMedicamento listaMedicamento[MEDIC];
   eCliente listaCliente[CLIENTE];


   do
    {
        opcion=menu("1.Cargar\n2.Mostrar\n3.Ordenar\n4.Modificacion\n5.Baja\n6.Salir\n Elija una opcion: ");
        switch(opcion)
        {
            case 1:
                inicializarLaboratorio(listaLaboratorio , LAG);
                inicializarCliente(listaCliente , CLIENTE);
                inicializarMedicamentos(listaMedicamento , MEDIC);

                break;
            case 2:

                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
        }

    }while(opcion!=6);
        return 0;
}
int menu(char texto[])
{
    int opcion;
    printf("%s", texto);
    scanf("%d", &opcion);

    return opcion;
}


