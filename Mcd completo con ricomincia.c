#include<stdio.h>
main()
{
	int NumMa,NumMi,I,C,V;
	printf("HEY!! Questo algoritmo serve per calcolare il MCD! \nMettimi alla prova!! \n");
	do
	{
	printf("Inserisci un numero: \n");
	scanf("%d",&NumMa);
	while(NumMa<0)
	{
		printf("Inserisci un valore positivo: \n");
		scanf("%d",&NumMa);
	}
	printf("Inserisci un numero: \n");
	scanf("%d",&NumMi);
	while(NumMi<0)
	{
		printf("Inserisci un valore positivo: \n");
		scanf("%d",&NumMi);
	}
	if(NumMa<NumMi)
	{
		C=NumMa;
		NumMa=NumMi;
		NumMi=C;
	}
	if(NumMa!=0&&NumMi!=0)
	{
	for(I=NumMi;I>=1;I=I-1)
	{
		if(NumMi%I==0&&NumMa%I==0)
		{
			printf("\nMCD=%d \n",I);
			I=0;
			printf("Se vuoi ricominciare inserisci un numero positivo: \t");
			scanf("%d",&V);
			if(V>=0)
			{
				system("cls");
			}
		}
	}
	}
	else
	{
		printf("Non si puo' fare con 0 \n");
		printf("Se vuoi ricominciare inserisci un numero positivo: \t");
			scanf("%d",&V);
			if(V>=0)
			{
				system("cls");
			}
	}
	
	}	while(V>=0);
	system("pause");
}
