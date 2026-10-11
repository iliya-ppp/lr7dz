#define _CRT_SECURE_NO_DEPRECATE
#include<locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int degree = 0;

    printf("Введите степень: ");
    scanf("%d", &degree);

    switch (degree)
    {
    case 10:
        printf("K\n");
        break;
    case 20:
        printf("M\n");
        break;
    case 30:
        printf("G\n");
        break;
    case 40:
        printf("T\n");
        break;
    case 50:
        printf("P\n");
        break;
    case 60:
        printf("E\n");
        break;
    default:
        printf("Неизвестная степень\n");
        break;
    }

    return 0;
}
