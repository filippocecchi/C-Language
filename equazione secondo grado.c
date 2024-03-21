#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d,f,discriminante,k;
	printf("Inserire valori coefficienti di tutti i termini in forma implicita: \n");
	printf("Inserire valore coeficiente della x^2 \n poi di x ed infine valore termine noto: \n");
	scanf("%d",&a);
	while(a==0)
	{
		scanf("%d",&a);
	}
	printf("\t x^2 \n");
	scanf("%d",&b);	
	while(b==0)
	{
		scanf("%d",&b);
	}
	printf("\t x \n");
	scanf("%d",&c);
	while(c==0)
	{
		scanf("%d",&c);
	}
	discriminante=b^2-(4*a*c);
    if(discriminante<=0)
    {
    	if(discriminante<0)
    	{
    		printf("equazione impossibile");
		}
		{
			d=(b*-1)/(2*a);
			printf("il valore e' %d",d);
		}
	}
	{
	f=((b*-1)-sqrt(discriminante))/2*a;
	k=((b*-1)+sqrt(discriminante))/2*a;
    printf("le soluzioni sono: \n");
    printf("%d \n",f);
    printf("%d \n",k);

	}
	system("pause");
}

