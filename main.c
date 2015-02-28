#include <stdio.h>
#include <stdlib.h>

 #define N  5

int main(int argc, char** argv) {
    
    int i,cont,maggioreEta;
    int eta[N];
    maggioreEta = 18;
    cont = 0;
    
    
    printf ("iserisci l'età di %d persone:  \n",N);
    
    for(i=0;i<N;i++){
       
        printf ("iserisci l'età della %da persona:  ",i+1);
        scanf ("%d",&(eta[i]));
    
        if(eta[i]>=maggioreEta){
            cont++ ;
         }
       }
   printf ("i maggiorenni sono : %d",cont);  

  return (EXIT_SUCCESS);
}
