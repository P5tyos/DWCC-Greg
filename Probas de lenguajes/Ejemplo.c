#include <stdio.h>

int suma (int a, int b) {
    return a+b;
}

int main() {
    int a = 2;
    int b = 3; //char* b = "3";
    printf("Voy a sumar %d y %d\n", a, b);    //printf("Voy a sumar %d y %s\n", a, b);
    printf("Debería ser 5?\n");

    printf("%d\n", suma(a,b ));
    return 0;
}