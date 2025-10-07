#include <stdio.h>
#include <math.h>

int main(){

    int x;

    printf("Напишите номер месяца  ");
    scanf("%d", &x);

    switch (x)
    {
    case 1: printf("В Январе 31 день"); break;
    case 2: printf("В Феврале 28 деней"); break;
    case 3: printf("В Марте 31 день"); break;
    case 4: printf("В Апреле  30 дней"); break;
    case 5: printf("В Мае 31 день"); break;
    case 6: printf("В Июне 30 дней"); break;
    case 7: printf("В Июле 31 день"); break;
    case 8: printf("В Августе 31 день"); break;
    case 9: printf("В Сентябре 30 дней"); break;
    case 10: printf("В Октябре 31 день"); break;
    case 11: printf("В Ноябре 30 дней"); break;
    case 12: printf("В Декабре 31 день"); break;
    default: printf("Неверное число"); break;
    }
    return 0;

}