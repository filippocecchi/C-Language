#include<stdio.h>
main()
{
	int Num,I,C;
	printf("Inserire un numero: \n");
	scanf("%d",&Num);
	for(I=1;I<=Num;I=I+1)
	{
      	for(C=2;C<I;C=C+1)
	{ 
	  if(I%C==0)
	  {
	  	C=I;
      }
      if(C==I)
      {
      	printf("%d\n",I);
	  }
	}
	}
	system("pause");
}
