#include<stdio.h>
main()
{
	int a,b,c,d,Resto;
	printf("questo algoritmoserve per calcolare mcd tra due valori \nInserire un valore: \n");
	scanf("%d",&a);
	printf("Inserire secondo valore \n");
	scanf("%d",&b);
	c=a;
	d=b;
    Resto=a%b;
	while(Resto!=0)
	{
	   c=d;
	   d=Resto;	
	   Resto=c%d;
	}
	printf("MCD: %d \n",d);
	system("pause");
}
