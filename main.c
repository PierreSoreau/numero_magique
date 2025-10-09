#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int random_number = rand() % 100 + 1;

    int nb1;
    printf("Choisissez un nombre entier entre 1 et 100:\n");
    scanf("%d",&nb1);

    while(nb1!=random_number){

        if ( (nb1>100) || (nb1<1) ){

            printf("Le nombre entier à choisir doit être entre 1 et 100.\n");
            printf("Choisissez un nombre entier entre 1 et 100:\n");
            scanf("%d",&nb1);
        }

        else if (nb1<random_number){
            printf("C'est plus!\n");
            printf("Choisissez un nombre entier entre 1 et 100:\n");
            scanf("%d",&nb1);
        }

        else{
            printf("C'est moins!\n");
            printf("Choisissez un nombre entier entre 1 et 100:\n");
            scanf("%d",&nb1);

        }
    }

    printf("Gagné!\n");

    exit(0);
}