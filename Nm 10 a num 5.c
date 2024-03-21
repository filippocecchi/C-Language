#include<stdio.h>
main()
{
	int Num10,Num5,Divisione;
	printf("Inserire numero: \n");
	scanf("%d",&Num10);
	Divisione=Num10;
	while(Divisione>0)
	{		
	    Divisione=Divisione/5;
		
		Num5=Divisione%5;

		printf("%d \n",Num5);
	}
	printf("\n");
	system("pause");
}
