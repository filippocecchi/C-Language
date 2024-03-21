#include<stdio.h>
main()
{
	int Mat[100][100],N,M,i,j;
	float somma,div;
	scanf("%d",&N);
	scanf("%d",&M);
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			scanf("%d",&Mat[i][j]);
		}
	}
	somma=0;
	div=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			somma=somma+Mat[i][j];
			div=div+1;
		}
	}
	somma=somma/div;
    for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(Mat[i][j]<somma)
			{
				printf("%d ",Mat[i][j]);
			}
		}
	}    
	
}
