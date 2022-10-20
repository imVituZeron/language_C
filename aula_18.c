#include <stdio.h>

int main(){

    int number, cifra;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    if(number >= 0){
        do {
            cifra = number % 10;
            printf("%d", cifra);
            number /= 10;
        } while (number != 0);
        printf("\n");
    }else if(number < 1){
        number = number * -1;
        printf("-");
        do {
            cifra = number % 10;
            printf("%d", cifra);
            number /= 10;
        } while (number != 0);
    }

    return 0;
}