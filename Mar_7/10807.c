#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int	num1;
	int	*num2;
	int	num3;
	int	count;

	scanf("%d", &num1);

	num2 = (int *)malloc(sizeof(int) * num1);

	for (int i=0; i<num1; i++)
	{
		scanf("%d", &num2[i]);
	}

	scanf("%d", &num3);

	count = 0;
	for (int i=0; i<num1; i++)
	{
		if (num3 == num2[i])
			count++;
	}

	printf("%d\n", count);
}
