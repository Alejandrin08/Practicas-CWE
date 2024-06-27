#include <stdio.h>

int main() {
    int i;
    unsigned int j;

    printf("Ejemplo 1\n");
    i = __INT_MAX__;
    printf("i = %d\n", i);
    i++;
    printf("i = %d\n", i);

    j = __UINT32_MAX__;
    printf("j = %u\n", j);
    j++;    
    printf("j = %u\n", j);

    printf("Ejemplo 2\n");
    i = -1;
    unsigned short u;
    u = i;
    printf("i = %d\n", i);
    printf("u = %hu\n", u);

    printf("Ejemplo 3\n");
    char cresult, c1, c2;
    c1 = 100;
    c2 = 27;
    cresult = c1 + c2;
    printf("c = %d\n", cresult);
    c1 = 100;
    c2 = 28;
    cresult = c1 + c2;
    printf("c = %d\n", cresult);
}