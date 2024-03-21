#include<stdio.h>
main()
{
	int a,b,moltiplicazione,resto,c;
	printf("Questo algoritmo serve per dividere due numeri con resto: \n");
	printf("Inserire dividendo: \n");
	scanf("%d",&a);	
	while(a<0)
	{
		printf("Non sono stato programmato per questo \nInserire un valore positivo \n");
		scanf("%d",&a);
		
	}
	printf("\n Inserire divisore: \n");
	scanf("%d",&b);
	while(b==0)
	{
		printf("Impossibile inserire un'altro numero \n");
		scanf("%d",&b);
	}
	while(b<0)	
	{
		printf("Non sono stato programmato per questo \nInserire un valore positivo \n");
		scanf("%d",&b);
	}
	c=a/b;
	moltiplicazione=c*b;
	resto=a-moltiplicazione;
	printf("\n Il quoziente e':%d \n",c);
	printf("Il resto e':%d \n",resto);
	system("pause");
}
