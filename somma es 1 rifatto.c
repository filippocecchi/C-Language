#include<stdio.h>
main()
{
	int Num1,Num2,Nu,Mu,Riporto,Somma,Posizione,SommaTot;
	scanf("%d",&Num1);
	printf("\n");
	scanf("%d",&Num2);
	Riporto=0;
	Posizione=-1;
	SommaTot=0;
	while(Num1>0)
	{
		Posizione=Posizione+1;
		Nu=Num1%10;
		Mu=Num2%10;
		if(Nu+Mu+Riporto>9)
		{
			Somma=(Nu+Mu+Riporto)%10;
			Somma=Somma*10^Posizione;
			Riporto=1;
			SommaTot=Somma+SommaTot;
		}
		else
		{
			Somma=(Nu+Mu+Riporto)%10;
			Somma=Somma*10^Posizione;
			Riporto=0;
			SommaTot=Somma+SommaTot;
		}
		Num1=Num1/10;
		Num2=Num2/10;
	}
	printf("\n%d \n",SommaTot);
	system("pause");
}
