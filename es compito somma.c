#include<stdio.h>
main()
{
	int N,M,Nu,Mu,Somma,Riporto;
	printf("Questo algoritmo serve per sommare due numeri di uguali cifre \nInserire prima e seconda cifra: \n");
	scanf("%d",&N);
	printf("\n");
	scanf("%d",&M);
	printf("\n");
	Riporto=0;
	while(N>0)
	{
		Nu=N%10;
		Mu=M%10;
		if(Nu+Mu+Riporto>9)
		{
			Somma=Nu+Mu-10+Riporto;
			Riporto=1;
		}
		else
		{
			Somma=Nu+Mu+Riporto;
			Riporto=0;
		}
	    printf("%d \n",Somma);
	    N=N/10;
	    M=M/10;
	}
	system("pause");
}
