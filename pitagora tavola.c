#include<stdio.h>
main()
{
	int N,M,Cont,I,Somma;
	scanf("%d",&N);
	scanf("%d",&M);
	printf("\n");
	for(I=1;I<=M;I=I+1)
	{
		for(Cont=1;Cont<N+1;Cont=Cont+1)
		{
			Somma=I*Cont;
			printf("%d\n",Somma);
		}
	}
	system("pause");
}
