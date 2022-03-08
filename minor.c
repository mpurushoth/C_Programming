#include<stdio.h>
int main(){
    int age;
    char minor;
    puts("Enter your age: ");
    scanf("%i", &age);
    minor= age >= 18 ? 'N': 'Y';
    printf("enterd age is minor:%c",minor);
    return 0;
    

}