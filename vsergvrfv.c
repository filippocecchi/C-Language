#include<stdio.h>
main()
{
	int a,b,cont;
	printf("Questo algoritmo serve per contare tutti i numeri da una ad un'altro \nInserire primo numero: \n");
	scanf("%d",&a);
	while(a<0)
	{
		printf("Non numeri negativi! \nInserire altro valore: \n");
		scanf("%d",&a);
		printf("\n");
	}
	printf("\nInserire secondo numero: \n");
	scanf("%d",&b);
		while(b<0)
	{
		printf("Non numeri negativi! \nInserire altro valore: \n");
		scanf("%d",&b);
		printf("\n");
	}
	printf("\n");
	cont=0;
	if(a>b)
	{
		while(a>b+1)
		{
			a=a-1;
			printf("%d \n",a);
			cont=cont+1;
		}
	}
	else
	{
		while(b>a+1)
		{
			a=a+1;
			printf("%d \n",a);
			cont=cont+1;
		}
	}
	printf("Il totale dei numeri tra i due e': %d \n",cont);
	system("pause");
}
