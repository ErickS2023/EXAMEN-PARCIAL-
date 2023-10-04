// piramide de numeros 

#include <stdio.h>

int main() {
    int i, j, num_lines;
    printf("Por favor ingrese el numero de lineas que desee: ");
    scanf("%d", &num_lines);
    for (i = 1; i <= num_lines; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\a");
    return 0;
}