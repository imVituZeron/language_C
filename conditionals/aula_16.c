#include <stdio.h>

int main(){

    int i;
    printf("Enter a integer number, between 1 and 5:");
    scanf("%d", &i);

    switch (i){
    case 1:
        printf("First\n");
        break;
    case 2:
        printf("Second\n");
        break;
    case 3:
        printf("Third\n");
        break;
    case 4:
        printf("Fourth\n");
        break;
    case 5:
        printf("fifth\n");
        break;
    default:
        printf("ERRO! - Invalid number\n");
        break;
    }

    return 0;
}