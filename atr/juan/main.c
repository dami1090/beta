#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int edad;
    char buffer[50];

    printf("Ingrese edad: ");
    scanf("%d",&edad);

    edad = isdigit(buffer);
    edad = atoi(buffer);

    printf("%d",edad);
    return 0;
}
