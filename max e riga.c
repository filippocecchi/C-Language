#include<stdio.h>
main()
{
	int Mat[100][100],N,M,I,J,Max,Riga;
	scanf("%d",&N);
	scanf("%d",&M);
	for(I=0;I<N;I++)
	{
		for(J=0;J<M;J++)
		{
			scanf("%d",&Mat[I][J]);
		}
	}
	Max=Mat[0][0];
    for(I=0;I<N;I++)
	{
		for(J=0;J<M;J++)
		{
			if(Mat[I][J]>Max)
			{
				Max=Mat[I][J];
				Riga=J;
			}
		}
	}
	printf("\n%d e' il maggiore ed si trova nella riga: %d",Max,Riga);
}
