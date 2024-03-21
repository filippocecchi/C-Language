#include<stdio.h>
main()
{
	int Prodotto,Cont,A,Massimo;
	printf("Inserire valore massimo prodotto: \n");
	scanf("%d",&Massimo);
	Prodotto=1;
	Cont=0;
	printf("\ninserire valori da moltiplicare: \n");
	while(Prodotto<=Massimo)
	{
		scanf("%d",&A);
		while(A<1||A>9)
		{
			printf("Inserire un valore tra 1 e 9 \n");
			scanf("%d",&A);
			printf("\n");
		}
		printf("\n");
		Prodotto=Prodotto*A;
		Cont=Cont+1;
	}
	printf("Il prodotto vale: %d \n",Prodotto);
	printf("Il numero dei valori inseriti e': %d \n",Cont);
	system("pause");
}
