#include <stdio.h>

int main(){
    int x = 0;

    while(x != 0){
        printf("test %d", x);
    }

    do{
        printf("test 2\n"); // esse sempre vai executar, pelo menos uma vez!
    } while(x != 0);

    return 0;
}