#include<stdio.h>
main()
{
	int Num10,NumB,Resto;
	scanf("%d",&Num10);
	scanf("%d",&NumB);
	Resto=0;
	while(Num10/NumB!=0)
	{
		Resto=Num10%NumB;
		Num10=Num10/NumB;
		printf("\n%d \n",Resto);
	}
	Resto=Num10%NumB;
	Num10=Num10/NumB;
	printf("\n%d \n",Resto);
	
	system("pause");
}
