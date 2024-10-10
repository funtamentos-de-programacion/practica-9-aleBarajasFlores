#include <stdio.h>

int suma(int*, int);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int resultado = suma(arr, 5);
    printf("%d\n", resultado);
    
    return 0;
}

int suma(int* arr, int size ) {
    int total;
    for(int i = 0; i < size; i++) {
        total += *(arr + i);
    }
    return total;    
}