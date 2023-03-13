#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, M;
    int *arr;

    scanf("%d %d", &N, &M);

    arr = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i<N; i++)
        arr[i] = i + 1;

    int start, end, temp = 0, size = 0;

    while (M--)
    {
        scanf("%d %d", &start, &end);
        start--;
        end--;
        size = (end - start + 1) / 2;
        while (size--)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    for (int k=0; k<N; k++)
        printf("%d ", arr[k]);

    printf("\n");
}