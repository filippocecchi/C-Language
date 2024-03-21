#include<stdio.h>
main()
{
	int Mat[100][100],N,M,i,j,V[100],R;
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
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			V[i]=V[i]+Mat[i][j];
		}
	}
	R=0;
	for(i=0;i<N;i++)
	{
		if(V[i]>=V[R])
		{
			R=i;
		}
	}
	for(j=0;j<M;j++)
	{
		printf("%d ",Mat[R][j]);
	}
}
