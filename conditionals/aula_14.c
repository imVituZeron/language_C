#include <stdio.h>

int main(){
    int age;

    printf("inform your age:");
    scanf("%d", &age);

    if(age < 18)
        printf("Drinks not allowed!\n");
    else
        printf("Free drinks\n");
    

    return 0;
}