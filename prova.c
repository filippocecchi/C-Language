#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	printf(" \n");
	if(n>0)
	{
		printf("Il numero e' positivo \n");
	}
	else
	{
		if(n<0)
		{
			printf("Il numero e' negativo\n");
		}
		else
		{
			printf("Il numero e' nullo \n");
		}
	}
	system("pause");
}
