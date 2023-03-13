#include <stdio.h>

int main(void)
{
    int N;
    char str[101];
    int total = 0;

    scanf("%d", &N);
    scanf("%s", str);
    
    int i = 0;
    while (N--)
    {
        total += (int)str[i] - '0';
        i++;
    }

    printf("%d\n", total);
}