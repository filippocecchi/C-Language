#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Questo algoritmo serve per calcolare Mcd tra due numeri \nInserire il primo: \n");
	scanf("%d",&a);
	while(a<0)
	{
		printf("Solo valori positivi! \nInserire altro valore: \n");
		scanf("%d",&a);
		printf("\n");
	}
	printf("Inserire secondo valore: \n");
	scanf("%d",&b);
		while(b<0)
	{
		printf("Solo valori positivi! \nInserire altro valore: \n");
		scanf("%d",&b);
		printf("\n");
	}
	if(a<b)
	{
		c=b;
		b=a;
		a=c;
	}
	d=b;
	while(a%d!=0||b%d!=0)
	{
	   d=d-1;
	}
	printf("MCD: %d \n",d);
	system("pause");
}
