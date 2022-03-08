#include<stdio.h>
 int main(){
     char day;
     puts("Enter the later: ");
     scanf("%c", &day);
     switch (day)
     {
    case 'a':
         puts("Monday");
         break;
    case 'b':
         puts("Tuesday");
         break;
    case 'c':
         puts("Wednesday");
         break;
    case 'd':
         puts("Thursday");
         break;
    case 'e':
         puts("Friday");
         break;
    case 'f':
         puts("Suterday");
         break;
    case 'g':
         puts("Sunday");
         break;
     
     default:
     puts("invlid number");
         break;
     }
return 0;
 }