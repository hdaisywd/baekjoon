#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    int idx;
    char str[1000];
    while (T--)
    {
        idx = 0;
        scanf("%s", str);
        printf("%c", str[0]);
        while (str[idx] != '\0')
            idx++;
        printf("%c\n", str[idx - 1]);
    }
}