#include<stdio.h>
main()
{
	float a,b,c,d,f;
	printf("Questo algoritmo serve a calolare perimetro ed area di un parallelogramma: \n");
	printf("inserire valore base \n");
	scanf("%f",&a);
	if(a<0)
	{
		printf("stai sbagliando, in geometria non esistono valori negativi \n");
		printf("inserire nuovo valore base \n");
		scanf("%f",&a);
	}
	printf("inserire valore altezza \n");
	scanf("%f",&b);
		if(b<0)
	{
		printf("stai sbagliando, in geometria non esistono valori negativi \n");
		printf("inserire nuovo valore altezza \n");
		scanf("%f",&b);
	}
	printf("inserire valore lato obliquo \n");
	scanf("%f",&c);
		if(c<0)
	{
		printf("stai sbagliando, in geometria non esistono valori negativi \n");
		printf("inserire nuovo valore lato obliquo \n");
		scanf("%f",&c);
	}
	d=a*2+c*2;
	printf("il valore del perimetro e' \n %f",d);
	f=a*b;
	printf("\nil valore dell'area e' \n %f",f);
	system("pause");
}
