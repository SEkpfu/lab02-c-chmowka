#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

    int x;

    printf("Напишите целое число = ");
    scanf("%d", &x);

    if (x%10 == 1){
        printf("Джек утопил %d корабль +", x);    
    }
    else if(x%10 == 2 || x%10 == 3 || x%10 == 4 ){
        printf("Джек утопил %d корабля -", x);
    }
    else if(x%10 == 5 || x%10 == 6 || x%10 == 7  || x%10 == 8 || x%10 == 9 || (x >= 11 && 19 >= x)){
        printf("Джек утопил %d кораблей++", x);
    }
    else if(x%10 == 0){
        printf("Джек утопил %d кораблей--", x);
    }
    

    return 0;
}
