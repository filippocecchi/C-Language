#include<stdio.h>
main()
{
	int N,M,Cont,C,I,R;
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
	I=N+1;
	R=-1;
    while(Cont<M)
    {
    	if(I%4==0)
    	{
    		printf("%d",I);
			Cont=Cont+1;
			R=R+1;
		}
		I=I+1;
		if(R==2)
		{
			printf("\n");
			R=0;
		}
		if(R==1)
		{
			printf("\t");
		}
	
	}
	printf("\n");
	system("pause");
}

