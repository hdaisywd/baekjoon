#include <stdio.h>

int main(void)
{
    int N;
    int count = 0;

    scanf("%d", &N);
    count = N / 4;

    for (int i =0; i<count; i++)
    {
        printf("long ");
    }
    printf("int\n");
}