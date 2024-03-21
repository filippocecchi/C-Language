#include <stdio.h>
main()
{
system("color 0a");
int a,b,C;
printf("Questo programma serve per fare il countdown da due numeri naturali preinseriti dall'utente. \n");
printf("Inserisci il primo numero: \n");
scanf("%d",&a);
printf("Inserisci il secondo numero: \n");
scanf("%d",&b);
C=0;
if(a>b)
{ 
while(a==b)
{
a=a-1;
printf("%d \n",&a);
C=C+1;
printf("\n");
}
}
else
{
while(b==a)
{
b=b-1;
printf("%d \n",&b);
C=C+1;
printf("\n");
}	
}  
printf("%d",C);
system("pause");
}
