#include<stdio.h>
main()
{
	int N[10000],i,v,Prova;
	scanf("%d",&v);
	scanf("%d",&N[0]);
	Prova=N[0];
	for(i=1;i<v;i++)
	{
		scanf("%d",&N[i]);
		if(N[i]>Prova)
		{
			Prova=N[i];
		}
	}
	printf("\n %d",Prova);
	
}
