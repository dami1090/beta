#include <stdio.h>
#include <stdlib.h>

int edad;
char buffer[50];

int main()
{
    printf("ingrese edad: \n");
    scanf("%d",&edad);
    printf("%d",edad);

    edad=isdigit(buffer);
    edad=atoi(buffer);

    printf("\n%d",buffer);
    return 0;
}



