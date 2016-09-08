#include <stdio.h>

main()
{
	int num1, num2, result = 0, i = 0;
	int num3[100] = {0};

	puts("RUSSIAN PEASANT MULTIPLICATION\n");
	printf("First number: ");
	scanf("%d", &num1);
	printf("Second number: ");
	scanf("%d", &num2);
	puts("\tColumn 1\tColumn 2tColumn 3");
	puts("-----------------------");
	do
	{
	printf("%d\t|%d\t|", num1, num2);
	if (num1 % 2 == 1)
	{
		printf("+ %d", num2);
		num3[i] = num2;

		result += num3[i];
		i++;
	}
	num1 /= 2, num2 *= 2;
	printf("\n");
	} while (num1 != 0);
	printf("\nResult: ");
	for (i -= 1; i >= 0; i--)
	{
		printf("%d", num3[i]);
		if (i > 0)
			printf(" + ");
		else
			printf(" = ");
	}
	printf("%d\n", result);
}
