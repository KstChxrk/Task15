. #include <stdio.h>
float Rings(float r1, float r2) // Функция для вычисления площади (S) кольца
{
    return 3.14 * (r1 * r1 - r2 * r2);
}
int main(void)
{
    for (int i = 1; i <= 3; ++i) // Цикл для расчета площади 3 различных колец
    {
        float r1, r2; // Переменные и ввод для пользователя
        printf("R1:");
        scanf_s("%f", &r1);
        printf("R2:");
        scanf_s("%f", &r2);
        printf("S:%f\n", Rings(r1, r2)); // Выводим результат
    }
    return 0;
}
