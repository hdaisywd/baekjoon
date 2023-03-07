#include <stdio.h>

int main(void)
{
    int arr[9];

    for (int i=0; i<9; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];
    int max_idx =0;

    for (int i=0; i<9; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            max_idx = i;
        }
    }
    printf("%d\n", max);
    printf("%d\n", max_idx + 1);
}