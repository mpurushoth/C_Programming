#include<stdio.h>
int main(){
    int salary;
   float bonus = 8.33;
   puts("Enter the your salary");
    scanf("%i", &salary);

    if (salary<10000){
        printf("your bonus=%.1f",salary*bonus/100);
    }else{
        puts("you are not get bonus");
    }
    return 0;
} 