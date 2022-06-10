#include<stdio.h>

int main()
{
    float a;
    scanf_s("%f", &a);

    if (a - (int)a >= 0.5) printf("%d", (int)a + 1);
    else printf("%d", (int)a);

    return 0;
}
