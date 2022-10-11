#include <stdio.h>

int main(){
    int my_age = 22;
    int age_mom = 42;
    int age_father = 43;
    int age_sis = 18;

    int age_tot_sum = my_age + age_father + age_mom + age_sis;
    int age_tot_div = my_age / age_father / age_mom / age_sis;
    int age_tot_mult = my_age * age_father * age_mom * age_sis;
    int average = (age_tot_sum)/4;

    printf("Total age is %i.\n", age_tot_sum);
    printf("Total age is %i.\n", age_tot_div);
    printf("Total age is %i.\n", age_tot_mult);
    printf("Average is %i.\n", average);
    
    return 0;
}