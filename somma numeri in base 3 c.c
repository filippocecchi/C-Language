#include<stdio.h>
main()
{
    int N,M,ParzN,ParzM,c,tot,Riporto;
 	printf("Inserire due numeri in base 3 da sommare: \n");
	scanf("%d",&N);
	scanf("%d",&M);
	if(N<M)
	{
		c=N;
		N=M;
		M=c;
	}
	Riporto=0;
	while(M>0)
	{
		ParzN=N%10;
		ParzM=M%10;
		if(ParzN+ParzM+Riporto<=2)
		{
			tot=ParzN+ParzM+Riporto;
			Riporto=0;
			printf("\n%d",tot);
		}
		else
		{ 
		  tot=ParzN+ParzM+Riporto;
			if(tot==3)
			{
				printf("\n0");
				Riporto=1;
			}
			else
			{
				printf("\n1");
				Riporto=2;
			}
	    }
		ParzN=N/10;
		ParzM=M/10;
	}
	if(Riporto!=0)
	{
		printf("\n%d",Riporto);
	}
	system("pause");
}

