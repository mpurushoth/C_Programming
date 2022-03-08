#include<stdio.h>
int main(){
    int year;
    puts("Enter the year: ");
    scanf("%i", &year);

    if(year % 4 !=0) {
        puts("it is a common year");
    }else if(year % 100 !=0) {
        puts("it is a leap year");
    }else if (year % 400 !=0){
        puts("it is a common year");
    }else{
        puts("it is a leap year");
    }
    return 0;
}