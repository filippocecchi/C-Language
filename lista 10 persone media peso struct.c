#include<stdio.h>
typedef struct{ char cognome[50];
                float Peso;
                float Altezza;
              }Persona;
main()
{
	Persona Lista[10];
	int i;
	float somma;
	somma=0;
	printf("Inserire cognome peso e altezza: \n");
	for(i=0;i<10;i++)
	{
		scanf("%s",Lista[i].cognome);
		scanf("%f",Lista[i].Peso);
		scanf("%f",Lista[i].Altezza);
		somma=somma+Lista[i].Peso;
	}
	somma=somma/10;
	printf("\nLa media del peso e': %f",somma);
}
