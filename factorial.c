#include<stdio.h>
 int main(){
   int num;
   long factorial = 1;
   puts("Enter the number");
   scanf("%i", &num);
   while (num > 0){
    factorial *= num--;
   
    printf("factorial = %i\n", factorial);
   }
   return 0;
}
