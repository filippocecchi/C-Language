#include<stdio.h>
main()
{
	int a,b,c,d;	
	printf("Questo programma serve ad imparare ad usare input ed output\n");
	printf("inserisci un primo valore \n");
	float Variabile; /*Numero salvato su 64 bit reali*/
	/*double*/ /*Numero salvato su 32 bit*/  
	/*char Carattere;*/
	scanf("%f",&Variabile); /*scanf("%c",&Carattere)*/
	printf("ineserire il valore della seconda variabile \n");
	scanf("%d",&a);  /*questo corrisponde a LEGGI(a)*/
	b=17;   /* = è il prende*/
	printf("se il secondo valore e' minore di 350 bene senno male");
	if(a<350)
	{
		printf("\nBene");
	}
	else
	{
		printf("\nMale");
	}
	printf("\n\n\n");	
	printf("Il valore della prima variabile e' %f \n",Variabile);
	printf("il secondo valore e' %d e la variabile b vale %d \n",a,b);
	system("pause");
}
