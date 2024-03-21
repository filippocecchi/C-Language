/*Si generi un programma che ad ogni partita chieda all’utente
 di inserire un numero intero, ne generi uno pseudocasuale
 compreso tra 1 e 100 e calcoli la somma.
 Se la somma `e pari vince pari, se `e dispari vince dispari.
 Il gioco termina quando pari o dispari vincono due partite
 consecutive o quando si raggiungono i 10 tentativi.
 
 In C `e possibile ottenere numeri pseudo-casuali tramite
 la funzione rand(), funzione definita nella libreria
 <stdlib.h>. La funzione restituisce numeri interi
 compresi tra 0 e RAND_MAX (un valore molto alto,
 definito anch’esso nella libreria).
 Per ottenere un numero casuale x all’interno di un
 intervallo voluto [0, N] si pu`o usare la seguente
 espressione:
 x = rand() % (N+1);
 Per evitare di ottenere la stessa sequenza di numeri
 ad ogni esecuzione, inoltre, all’inizio del programma
 conviene inizializzare il generatore tramite la chiamata
 srand(time(NULL)).
 La funzione time() `e contenuta nella libreria <time.h>.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
float y,w,max;
int num,t,cas,conta=0,flag=0,tempp=0,tempd=0,somma;
int main()
{
    srand(time(NULL));
    do
    {
        scanf("%d",&num);
        cas=(rand()%100)+1;
        somma=num+cas;
        if(somma%2==0)
        {
            tempp=tempp+1;
        }
        else
        {
            tempd=tempd+1;
        }
        printf("     %d",cas);
        conta=conta+1;
    }while(conta<10&&(abs(tempp-tempd)<2));   //abs= valore assoluto
    if(tempp>tempd)
        printf("\npari ha vinto\n");
    else
    {
        if(tempp==tempd)
            printf("\ndispari e pari hanno pareggiato\n");
        else
            printf("\ndispari ha vinto\n");
    }
    
}
