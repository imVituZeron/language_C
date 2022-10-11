#include <stdio.h>

int main(){
    int base;
    int area;
    int height;

    printf("Insert the base value:");
    scanf("%i", &base);   // scanf = função para capturar o input do teclado.
    printf("Insert the height value:");
    scanf("%i", &height); // params do scanf = tipo do valor digitado e inserindo na variável.

    area = base * height;
    printf("The rectangle area value is %i.\n", area);

    return 0;
}