# Numéro magique

Jeu du juste prix qui se joue sur un terminal. L'utilisateur doit deviner le numéro que l'ordinateur a choisi mais n'a pas divulgué.  
L'ordinateur donne des indications si la valeur du chiffre est plus élevé ou moins élevée que la proposition que l'utilisateur a rentré sur le terminal.  
L'utilisateur a gagné lorsqu'il a trouvé le bon numéro.

## Technologies utilisées

Langage C

## Installation et lancement du jeu
### 1. Construire l'image Docker

Placer le `Dockerfile` à la racine du dossier du projet (où se trouve le code C que vous avez enregistré).  
Puis dans un terminal, positionnez-vous dans le dossier en question puis lancez la commande :

docker build -t mon-jeu-c .

### 2. Lancer un container Docker

Ecrire la commande ci-dessous dans le terminal:

docker run -it --rm --name jeu-c-container mon-jeu-c

### 3. Lancer le jeu

Ecrire la commande ci-dessous dans le terminal:

./numero_magique


## Fonctionnalités

![gif du jeu](photo/numero-magique.gif)

