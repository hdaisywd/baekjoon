#include <stdio.h>

int main(void)
{
    int arr[28];
    int flag=0;

    for (int i=0; i<28; i++)
    {
        scanf("%d", &arr[i]);
    }

    int j = 1;
    while (j <= 30)
    {
        flag = 0;
        for (int i =0; i<28; i++)
        {
            if (arr[i] == j)
                flag = 1;
        }
        if (flag != 1)
            printf("%d\n", j);
        j++;
    }
}