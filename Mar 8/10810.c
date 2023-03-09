#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, M;
    int *arr;

    scanf("%d %d", &N, &M);

    arr = (int *)malloc(sizeof(int) * N);

    int i, j, k;

    for (int d=0; d<M; d++)
    {
        scanf("%d %d %d", &i, &j, &k);
        for (int c =i-1; c<j; c++)
        {
            arr[c] = k;
        }
    }

    for (int i =0; i<N; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
