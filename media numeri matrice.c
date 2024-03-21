#include<stdio.h>
main()
{
	int Mat[100][100],N,M,I,j,media,div;
	scanf("%d",&N);
	scanf("%d",&M);
	media=0;
	for(I=0;I<N;I++)
	{
		for(j=0;j<M;j++)
		{
			printf("Inserire numero: \n");
			scanf("%d",&Mat[I][j]);
			media=Mat[I][j]+media;
		}
	}
	div=M*N;
	media=media/div;
	printf("\n%d",media);
}
