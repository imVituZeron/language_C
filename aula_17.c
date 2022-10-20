#include <stdio.h>

int main(){

    int number1, number2; 

    printf("Enter with a value: ");
    scanf("%d", &number1);
    printf("Entre with other value: ");
    scanf("%d", &number2);

    if(number1 == 0 || number2 == 0)
        printf("Some number is ZERO then Invalid Division!\n");
    else if (number1 % number2 == 0)
        printf("%d is divisible to the %d!\n", number1, number2);
    else 
        printf("%d isn't divisible to the %d!\n", number1, number2);
    
    return 0;
}