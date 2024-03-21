#include<stdio.h>
main()
{
	int NumI,Base,Num10,NumC,I,TotPosizione,Unita,Somma,Posizione;
	printf("Inserire base del numero: \n");
	scanf("%d",&Base);
	Somma=0;
	Posizione=-1;
	while(Base<=0)
	{
		printf("Inserire nuovo numero: \n");
		scanf("%d",&Base);
	}
	printf("Inserire Numero da convertire in base 10\n");
	scanf("%d",&NumI);
	printf("Inserire numero di cifre: \n");
	scanf("%d",&NumC);
	TotPosizione=NumC;
	for(I=0;I<=TotPosizione;I=I+1)
	{
		Unita=NumI%10;
		Posizione=Posizione+1;
		Somma=Somma+Unita*Base^Posizione;
		NumI=NumI-Unita;
		NumI=NumI/10;
	} 
	printf("%d",&Somma);
	system("pause");
}
