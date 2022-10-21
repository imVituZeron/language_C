#include <stdio.h>

int main(){
    int num1 = 100;
    int num2 = 20;
    int result;

    num1 < num2 ? printf("yes\n") : printf("No\n");

    num1 < num2 ? result = 10 : result = -10;

    printf("%d\n", result);


    return 0;
}