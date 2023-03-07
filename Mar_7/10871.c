#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, X;
    int *arr;

    scanf("%d %d", &N, &X);

    arr = (int *)malloc(sizeof(int) * N);
    for (int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i=0; i<N; i++)
    {
        if (arr[i] < X)
            printf("%d ", arr[i]);
    }
    printf("\n");
}