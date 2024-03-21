#include<stdio.h>
main()
{
	int N,Somma,I;
	Somma=0;
	scanf("%d",&N);
	for(I=1;I<N;I=I+1)
	{
		if(N%I==0)
		{
			Somma=Somma+I;
		}
	}
	if(Somma==N)
	{
		printf("il numero e' perfetto \n");
	}
	else
	{
		printf("il numero non e' perfetto \n");
	}
	system("pause");
}
