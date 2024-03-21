#include<stdio.h>
#include<math.h>
main()
{
	int Num,Somma,Posizione,Potenza,Base;
	Num=1;
	Somma=0;
	Posizione=0;
	Base=10;
	while(Num>=0)
	{
		scanf("%d",&Num);
		while(Num>9)
		{
			printf("Inserire nuovo numero:\n");
			scanf("%d",&Num);
		}
		if(Num>=0)
		{
		printf("\n");	
		Potenza=BasePAW(Posizione;
		Posizione=Posizione+1;
		Somma=Num*Potenza+Somma;	
	    }
	}
	printf("\n%d \n",Somma);
	system("pause");
}

