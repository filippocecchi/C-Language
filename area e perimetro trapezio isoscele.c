#include<stdio.h>
main()
{
	float a,b,c,d,f,g;
	printf("Questo programma serve per calcolare area e perimetro \ndi un trapezio isoscele: \n");
	printf("Inserire valore base maggiore \n");
	scanf("%f",&a);
	printf("Inserire valore base minore \n");
	scanf("%f",&b);
	if(a<b)
	{
		printf("Errore la base maggiore e' piu' piccola della base maggiore \ninserire una nuova base minore \n(possibilmente piu' piccola rispeto alla base minore): \n");
		scanf("%f",&b);
	}
	printf("Inserire valore altezza \n");
	scanf("%f",&c);
	printf("Inserire valore lato obliquo \n");
	scanf("%f",&d);
	f=a+b+d*2;
	printf("Il perimetro e' \n%f",f);
	g=(a+b)*c/2;
	printf("\nL'area e' \n%f \n",g);
	system("pause");
}
