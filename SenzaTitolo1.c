#include<stdio.h>
main()
{
	int N,M,Cont,C,I;
	printf("Inserire due numeri: \n");
	scanf("%d",&N);
	scanf("%d",&M);
	if(N>M)
	{
	  C=M;
	  M=N;
	  N=C;
	}
	Cont=0;
	for(I=N+1;I<M;I=I+1)
	{
		if(I%4==0)
		{
			printf("%d",I);
			Cont=Cont+1;
		}
		if(Cont==2)
		{
			printf("\n");
			Cont=0;
		}
		if(Cont==1)
		{
		    printf("\t");
		}
		
	}
	printf("\n");
	system(getch);
}
