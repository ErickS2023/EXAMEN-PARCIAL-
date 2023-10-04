//Intercambio de variables 
#include <stdio.h>

int main() {
    int v1, v2, v3, temp;
    printf("Introduce el valor de v1: ");
    scanf("%d", &v1);
    printf("Introduce el valor de v2: ");
    scanf("%d", &v2);
    printf("Introduce el valor de v3: ");
    scanf("%d", &v3);

    temp = v1;
    v1 = v2;
    v2 = v3;
    v3 = temp;

    printf("El valor de v1 es: %d\n", v1);
    printf("El valor de v2 es: %d\n", v2);
    printf("El valor de v3 es: %d\n", v3);

    printf("\a");
	return 0;
}