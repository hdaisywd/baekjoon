#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, M;
    int *arr;

    scanf("%d %d", &N, &M);

    arr = (int *)malloc(sizeof(int) * N);

    for (int k=0; k<N; k++)
    {
        arr[k] = k + 1;
    }

    int i, j, temp = 0;
    for (int k=0; k<M; k++)
    {
        scanf("%d %d", &i, &j);
        i--;
        j--;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int k=0; k<N; k++)
        printf("%d ", arr[k]);
    
    printf("\n");
}