#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    char str[] = "hola mundo";
    char str2[5];
    str2[0] = 'A';
    str2[1] = 'd';
    str2[2] = 'i';
    str2[3] = 'o';
    str2[4] = 's';

    for ( int i = 0; i < 5; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n\n");

    for ( int i = 0; i < sizeof(str); i++) {
        printf("%c, ", str[i]);
    }
    printf("\n\n");

    for ( int i = 0; i < sizeof(str2); i++) {
        printf("%c, ", str2[i]);
    }
    printf("\n\n");

    return 0;
}