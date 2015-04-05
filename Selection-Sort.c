#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(){
int v[N];
int i,x;
int pos_max,aiuto;

for(i = 0; i < N; i++) {      //Inserimento valori nel vettore.
      printf("Inserisci l'elemento %d: \n", i);
      scanf("%d", &v[i]);
      }
    
for(x = 0; x < (N - 1); x++) {        //Ciclo esterno.
pos_max = x;
      for(i = x + 1; i < N; i++) {          //Ciclo interno che mi permette di trovare la posizione del valore massimo.
            if(v[pos_max]<v[i]) {
            pos_max = i;
            }
      }
                    if(x != pos_max) {                   //Se il minimo si trova nella posizione indicata da "x", allora non sarà necessario effettuare lo scambio.
                    aiuto = v[pos_max];
                    v[pos_max] = v[x];
                    v[x] = aiuto;
                    }
}

for(i = 0; i < N; i++) {      //Stampa dell'array ordinato.
       printf("Elemento %d dell'array ordinato: %d\n", i, v[i]);
       }

return (EXIT_SUCCESS);  
}
