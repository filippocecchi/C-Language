#include<stdio.h>
main()
{
	int a,b,I,D;
	scanf("%d",&a);
	printf("\n");
	D=a;
	scanf("%d",&b);
	printf("\n");
	for(I=0;I<b;I=I+1)
	{
		a=D+a;
		
	}
	a=a-D;
	printf("%d\n",a);
	system("pause");
}
