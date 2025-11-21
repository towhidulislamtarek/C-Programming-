#include<stdio.h>

int main (void)
{

	unsigned numMax;
	unsigned numA, numB;
	char operacao;

	scanf("%u", &numMax);
	scanf("%u %c %u", &numA, &operacao, &numB);

	if (operacao == '+')
		if (numA + numB > numMax)
			printf("OVERFLOW\n");
		else
			printf("OK\n");
	else
		if (numA * numB > numMax)
			printf("OVERFLOW\n");
		else
			printf("OK\n");

    return 0;
}
