#include<stdio.h>
 #include<conio.h>
 void main()
{
    int a =10;
    int *p;
   
    p = &a;
    
    printf("address of a: %p\n",&a);
    printf("value of a: %d\n",a);

    printf("address of p: %p\n",p);
    printf("value of *p: %d\n",*p);
}