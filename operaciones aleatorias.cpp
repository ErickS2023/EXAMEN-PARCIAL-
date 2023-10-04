
//Operacines aleatorias

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num1, num2, op;
    srand(time(NULL));    
    op = rand() %5+1;
	
	while(op<5){
	num1 = rand() % 10 + 1;
    num2 = rand() % 10 + 1;
    op = rand() %5+1;
	    switch (op)
    {
        case 1:
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            printf("%d / %d = %.2f\n", num1, num2, (float)num1 / (float)num2);
            break;
        default:
            printf("Opcion invalida\n");
            break;
    }	
	}

    printf("\a");
	return 0;
	}
    









