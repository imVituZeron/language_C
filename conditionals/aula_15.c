#include <stdio.h>

int main(){

    int age;

    printf("inform your age:");
    scanf("%d", &age);

    if(age <= 5)
        printf("Baby\n");
    else if(age > 5 && age <= 10)
        printf("Child\n");
    else if(age > 10 && age <= 18)
        printf("Teenager\n");
    else if(age > 18 && age <= 50)
        printf("Adult\n");
    else
        printf("Old\n");


    return 0;
}