#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    /*choix d'un nombre entier mystère aléatoire entre 1 et 100 par l'ordinateur*/
    srand(time(NULL));
    int random_number = rand() % 100 + 1;

    /*l'utilisateur essaie de deviner pour la première fois le nombre entier mystère de l'ordinateur */
    int nb1; 
    char c;   
    printf("Choisissez un nombre entier entre 1 et 100:\n");    
    int ret =scanf("%d%c", &nb1,&c); //on lit le nombre entier et le caractère suivant   

        /*Tant que l'élément choisi par l'utilisateur ne correspond pas au nombre entier choisi par l'ordinateur on rentre dans les conditions de la boucle while.*/
        while(nb1!=random_number){  
            
            //Si la valeur rentrée par l'utilisateur n'est pas un entier (caractère ou nombre décimal) on rentre dans le if
            //dans le cas d'un nombre décimal par exemple l'ordinateur arrive à lire 2 valeurs pour le scan donc ret=2. Mais si c'est 2.5 par exemple il lit 2 et '.' mais c correspond à '.' et non pas \n
            //dans le cas d'un ou plusieurs caractères l'ordinateur ne lit aucune valeur ou une seule pour le scan. Si c'est blabla par exemple il lit le 'l' seulement donc ret=1 et en plus c='l'
            if (ret!=2 || c!='\n'){
                printf("Vous n'avez pas rentré un nombre entier\n");
                while (getchar()!= '\n');//on réinitialise le buffer jusqu'à la fin de la ligne               
                printf("Choisissez un nombre entier entre 1 et 100:\n");                
                ret =scanf("%d%c", &nb1,&c);//on relit de nouveau une nouvelle valeur rentrée par l'utilisateur                        
                
            }

            /*Si le nombre entier choisi par l'utilisateur n'est pas compris entre 1 et 100 
            alors on reprécise à l'utilisateur qu'il faut qu'il choisisse un nombre entier entre 1 et 100 
            et on lui redemande de choisir un nombre entier entre 1 et 100*/
            else if ( (nb1>100) || (nb1<1) ){                

                printf("Le nombre entier à choisir doit être entre 1 et 100.\n");
                printf("Choisissez un nombre entier entre 1 et 100:\n");
                ret =scanf("%d%c", &nb1,&c);
            }


            /*Si le nombre entier choisi par l'utilisateur est inférieur au nombre de l'ordinateur 
            alors on précise à l'utilisateur via le terminal que le nombre entier de l'ordinateur est plus élevé que son nombre
            et on lui redemande de choisir un nombre entier entre 1 et 100*/
            else if (nb1<random_number){
                printf("C'est plus!\n");
                printf("Choisissez un nombre entier entre 1 et 100:\n");
                ret =scanf("%d%c", &nb1,&c);
            }

            /*Dernière possibilité, si le nombre entier choisi par l'utilisateur est supérieur au nombre de l'ordinateur 
            alors on précise à l'utilisateur via le terminal que le nombre entier de l'ordinateur est inférieur à son nombre
            et on lui redemande de choisir un nombre entier entre 1 et 100*/
            else{
                printf("C'est moins!\n");
                printf("Choisissez un nombre entier entre 1 et 100:\n");
                ret =scanf("%d%c", &nb1,&c);

            }
        }

        /*En revanche si le nombre entier choisi par l'utilisateur est égal au nombre entier choisi par l'ordinateur, on sort de la boucle et le message Gagné! est affiché sur le terminal*/
        printf("Gagné!\n");

    

    exit(0);
}