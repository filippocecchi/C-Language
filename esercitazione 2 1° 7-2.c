#include<stdio.h>
main()
{
	int Somma,Cont,A,Massimo;
	printf("Inserire valore massimo somma: \n");
	scanf("%d",&Massimo);
	Somma=0;
	Cont=0;
	printf("\ninserire valori da sommare: \n");
	while(Somma<=Massimo)
	{
		scanf("%d",&A);
		printf("\n");
		Somma=Somma+A;
		Cont=Cont+1;
	}
	printf("La somma vale: %d \n",Somma);
	printf("Il numero dei valori inseriti e': %d \n",Cont);
	system("pause");
}
