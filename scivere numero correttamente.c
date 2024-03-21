#include<stdio.h>
main()
{
	int Num,Somma,Posizione;
	Num=1;
	Somma=0;
	Posizione=-1;
	while(Num>=0)
	{
		scanf("%d",&Num);
		while(Num>9)
		{
			printf("Inserire nuovo numero:\n");
			scanf("%d",&Num);
		}
		if(Num>0)
		{
		printf("\n");	
		Posizione=Posizione+1;
		Somma=Somma+Num*(10^Posizione);	
	    }
	}
	printf("\n%d\n",Somma);
	system("pause");
}
