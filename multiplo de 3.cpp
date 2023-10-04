//Multiplo de 3
#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            printf("%d es multiplo de 3\n", i);
        } else {
            printf("%d no es multiplo de 3\n", i);
        }
    }
    printf("\a");
    return 0;
}
