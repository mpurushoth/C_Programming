#include<stdio.h>
int main(){
    int n;
    printf("Enter the integer value:\n");
    scanf("%d",&n);

    while(n != 0){
         
        if(n < 0)
           break;
            printf("Enter the value:\n");
            scanf("%d",&n);
             
    }
}