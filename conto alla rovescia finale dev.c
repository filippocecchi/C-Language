#include<stdio.h>
main()
{
	int a;
	printf("Questo algoritmo serve per fare conto alla rovescia: \n");
	printf("Inserire primo valore: \n");
	scanf("%d",&a);
	if(a>0)
	{	
	   while(a>0)
	   {
	   	a=a-1;
	   	printf("%d \n",a);
	   }
    }
    else
    {
    	while(a<0)
    	{
    		a=a+1;  	
			printf("%d \n",a);
		}
	}
	system("pause");
}
