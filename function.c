/*fuction
#include<stdio.h>

void  greet(){
    puts("Welcome!");
}

int main(){
    greet();
    return 0;
}*/


#include<stdio.h>
#include<conio.h>

void main( )
{
    float square ( float ) ;     /* function declaration stement */
    float a, b ;
    printf ( "\nEnter any number: " ) ;
    scanf ( "%f", &a ) ;
    b = square ( a ) ;
    printf ( "\nSquare of %0.2f is %0.2f", a, b );
}
    float square ( float x ) 
    {
        float y ;
        y = x * x ;
        return ( y ) ;
    }