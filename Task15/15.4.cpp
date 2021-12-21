#include <stdio.h>

int quarter(float x, float y) { // Функция для определения номера координатной четверти
    if ((x > 0) && (y > 0))
        return 1;
    if ((x < 0) && (y > 0))
        return 2;
    if ((x < 0) && (y < 0))
        return 3;
    if ((x > 0) && (y < 0))
        return 4;
}

int main(void)
{
    int i;
    for (i = 1; i <= 3; ++i) { // Цикл для определения номера координатной четверти для 3 точек
        float x, y;
        printf("X:");
        scanf_s("%f", &x);
        printf("Y:");
        scanf_s("%f", &y);
        printf("Quarter-%i\n", quarter(x, y));
    }
    return 0;
}
