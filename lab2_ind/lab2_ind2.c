#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>

int main(){

    double x, p;
    printf("Введите переменную x =  ");
    scanf("%lf", &x);

    if (x<= -10){
        p= 12.0*5.0/7.0;
        printf("x <= -10, то p = %.2f", p );
    }
    else if(-10<x  && x<=0){
        p = sqrt(fabs(10- x * x));
        printf("-10<x  && x<=0, то p = %.2f", p );
    }
    else if(x > 0){
        p = cos(M_PI * (x + 1)); 
        printf("x > 0, то p = %.2f", p);
    }


    return 0;
}



