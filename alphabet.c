#include<stdio.h>
char lower (char ch){
    if(ch >= 65 && ch <= 90){
        return(ch+32);
    }else{ 
        return ch;
    }
}
int main(){
char ch1;
puts("Enter an alphabet: ");
scanf("%c", &ch1);
ch1= lower(ch1);
printf("%c", ch1);
return 0;


}