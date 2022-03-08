#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    int a,b,c = 0;
printf("Enter the two values\n");
scanf("%d%d",&a,&b);
printf("Enter the operater(+,-,*,/)\n");
ch = getch();

switch (ch)
{
        case '+':c=a+b;
                    break;
        case '-':c=a-b;
                    break;
        case '*':c=a*b;
                    break;
        case '/':c=a/b;
                    break;

    default:printf("the oparater invaled");
                    break;
}


printf("result is %d",c);

}

