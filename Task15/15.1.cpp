#include <stdio.h>

void PowerA3(float A, float* B) //Создаем функцию для получения числа в 3 степени
{
    *B = A * A * A;
}

int main()
{
    for (int i = 1; i <= 5; ++i) //Цикл для 5 чисел
    {
        float A;
        printf("A:");
        scanf_s("%f", &A);
        float B;
        PowerA3(A, &B);
        printf_s("B = %f\n", B);
    }
    return 0;
}
