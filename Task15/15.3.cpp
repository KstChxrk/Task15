. #include <stdio.h>
float Rings(float r1, float r2) // ������� ��� ���������� ������� (S) ������
{
    return 3.14 * (r1 * r1 - r2 * r2);
}
int main(void)
{
    for (int i = 1; i <= 3; ++i) // ���� ��� ������� ������� 3 ��������� �����
    {
        float r1, r2; // ���������� � ���� ��� ������������
        printf("R1:");
        scanf_s("%f", &r1);
        printf("R2:");
        scanf_s("%f", &r2);
        printf("S:%f\n", Rings(r1, r2)); // ������� ���������
    }
    return 0;
}
