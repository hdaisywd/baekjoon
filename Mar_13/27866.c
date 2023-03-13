#include <stdio.h>

int main(void)
{
    char    str[1000];
    int		idx = 0;

	str[idx] = 0;

	scanf("%s", str);

	int		i;
	scanf("%d", &i);

	printf("%c\n", str[i - 1]);
}