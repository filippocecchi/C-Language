#include<stdio.h>
main()
{
	int Num1,Num2,I,C,T,Contr,D,F,R;
	printf("quante volte verro eseguito? \n");
	scanf("%d",&Contr);
	R=0;
	for(D=Contr;D>0;D=D-1);
	{
		R=R+1;
		scanf("%d",&Num1);
		scanf("%d",&Num2);
		if(Num1<Num2)
		{
			for(I=Num1+1;I<Num2;I=I+1)
			{
				printf("\n%d \n",I);
			}
		}
		else
		{
			for(C=Num1-1;C>Num2;C=C-1)
			{
				printf("\n%d \n",C);
			}
			
		}
		printf("Per ricominciare premere 4 \nPer terminare premere 1\n");
		scanf("%d",&T);
		R=T;
	while(R!=4&&R!=1)
	{
      scanf("%d",&T);
      R=T;
    }
	if(T==4)
	{
		system("cls");
		D=Contr-R;
	}
	if(T==1)
	{
		D=0;
	}
    }
	system("pause");
}


