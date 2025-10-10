#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    /*choix d'un nombre entier mystère aléatoire entre 1 et 100 par l'ordinateur*/
    srand(time(NULL));
    int random_number = rand() % 100 + 1;

    /*l'utilisateur essaie de deviner pour la première fois le nombre entier mystère de l'ordinateur */
    int nb1;    
    printf("Choisissez un nombre entier entre 1 et 100:\n");    
    int ret =scanf("%d", &nb1);    

        /*Tant que l'élément choisi par l'utilisateur ne correspond pas au nombre entier choisi par l'ordinateur on rentre dans les conditions de la boucle while.*/
        while(nb1!=random_number){  
            
            //Si la valeur rentrée par l'utilisateur n'est pas un entier 
            if (ret==0){
                printf("Vous n'avez pas rentré un nombre entier\n");
                while (getchar()!= '\n');               
                printf("Choisissez un nombre entier entre 1 et 100:\n");                
                ret=scanf("%d", &nb1);                       
                
            }

            /*Si le nombre entier choisi par l'utilisateur n'est pas compris entre 1 et 100 
            alors on reprécise à l'utilisateur qu'il faut qu'il choisisse un nombre entier entre 1 et 100 
            et on lui redemande de choisir un nombre entier entre 1 et 100*/
            else if ( (nb1>100) || (nb1<1) ){                

                printf("Le nombre entier à choisir doit être entre 1 et 100.\n");
                printf("Choisissez un nombre entier entre 1 et 100:\n");
                ret=scanf("%d",&nb1);
            }


            /*Si le nombre entier choisi par l'utilisateur est inférieur au nombre de l'ordinateur 
            alors on précise à l'utilisateur via le terminal que le nombre entier de l'ordinateur est plus élevé que son nombre
            et on lui redemande de choisir un nombre entier entre 1 et 100*/
            else if (nb1<random_number){
                printf("C'est plus!\n");
                printf("Choisissez un nombre entier entre 1 et 100:\n");
                ret=scanf("%d",&nb1);
            }

            /*Dernière possibilité, si le nombre entier choisi par l'utilisateur est supérieur au nombre de l'ordinateur 
            alors on précise à l'utilisateur via le terminal que le nombre entier de l'ordinateur est inférieur à son nombre
            et on lui redemande de choisir un nombre entier entre 1 et 100*/
            else{
                printf("C'est moins!\n");
                printf("Choisissez un nombre entier entre 1 et 100:\n");
                ret=scanf("%d",&nb1);

            }
        }

        /*En revanche si le nombre entier choisi par l'utilisateur est égal au nombre entier choisi par l'ordinateur, on sort de la boucle et le message Gagné! est affiché sur le terminal*/
        printf("Gagné!\n");

    

    exit(0);
}