#include <stdio.h>

void PowerA3(float A, float* B) //������� ������� ��� ��������� ����� � 3 �������
{
    *B = A * A * A;
}

int main()
{
    for (int i = 1; i <= 5; ++i) //���� ��� 5 �����
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
