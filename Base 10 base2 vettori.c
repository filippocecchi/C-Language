#include<stdio.h>
main()
{
	int Resto[1000],Ris,Base,N;
	scanf("%d",&Ris);
	Base=2;
	N=0;
	while(Ris/Base>0)
	{
		Resto[N]=Ris%Base;
		Ris=Ris/Base;
		N=N+1;
	}
	for(N=N-1;N>=0;N=N-1)
	{
		printf("%d",Resto[N]);
	}
	printf("\n");
	system("pause");
}