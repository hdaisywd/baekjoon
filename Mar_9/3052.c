#include <stdio.h>

int main(void)
{
    int arr[10];
    int arr2[10];
    int count = 0, flag, j;

    for (int i=0; i<10; i++)
    {
        j = 0;
        flag = 0;
        scanf("%d", &arr[i]);
        arr2[i] = arr[i] % 42;
        while (j < i)
        {
            if (arr2[i] == arr2[j])
                flag = 1;
            j++;
        }
        if (!flag)
            count++;
    }

    printf("%d\n", count);
}