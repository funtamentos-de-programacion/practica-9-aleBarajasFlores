#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    //TODO: (14) Declara un arreglo de tres apuntadores a entero
    int* arr[] = {&a, &b, &c};
    //TODO: (15) Asigna a cada apuntador la dirección de las variables a, b y c

    //TODO: (16) Mostrar los valores usando los punteros
    for(int i = 0; i < 3 ; i++) {
        printf("%d ", **(arr + i));
    }
    printf("\n");
    
    return 0;
}
