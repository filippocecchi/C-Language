#include<stdio.h>
main()
{
	int a,b,d;
	d=1;
	while(d>=0)
	{	
	printf("inserire un primo valore \n");
	scanf("%d",&a);
	printf("inserire un secondo valore \n");
	scanf("%d",&b);
	printf("ora faro' la somma \n");
	a=a+b;
	printf("la somma e' %d \n",a);
	printf("Se si vuole ricominciare inserire un valore positivo senno' uno negativo:");
	scanf("%d",&d);
	}
	system("pause");
}
