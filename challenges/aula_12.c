#include <stdio.h>
// challenge 1
int main(){

    int number_factor;
    int result = 1;

    printf("Enter a numeric value: ");
    scanf("%d",&number_factor);

    for( ; number_factor > 0; number_factor--){
        printf("%d\n",number_factor);
        result *= number_factor;
        printf("%d\n", result);
    }
    
    return 0;
}