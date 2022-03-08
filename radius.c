#include<stdio.h>
int main(){
    
float area,circum,radius;
printf("Enter the radius: ");
scanf("%f",&radius);
area = (3.14*radius*radius);
circum = (2*3.14*radius);
printf("area:%0.2f\n",area);
printf("circum:%0.2f\n",circum);
return 0;
}