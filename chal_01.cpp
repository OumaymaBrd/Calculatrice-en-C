#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main() {
   e: printf("\t\t Bienvenue sur Notre Programme qui fournit Le menu ci-dessous\n\n");

    printf("1: Addition : Ajouter deux ou plusieurs nombres\n");
    printf("2: Soustraction : Soustraire deux nombres\n");
    printf("3: Division : Diviser deux nombres, avec gestion de la division par zero\n");
    printf("4: Moyenne : Calculer la moyenne d'une serie de nombres\n");
    printf("5: Valeur absolue : Calculer la valeur absolue d'un nombre\n");
    printf("6: Exponentiation : Calculer un nombre à une certaine puissance\n");
    printf("7: Racine carrée : Calculer la racine carrée d'un nombre positif\n\n");

    // Déclaration de la variable pour le choix de l'opération
    int n;
    printf("Choisir le numero de l'operation a effectuer : ");
    scanf("%d", &n);

    switch (n) {
        case 1: {
            int fois;
            printf("\t\tBienvenue dans le calcul de somme de n entiers\n\n");
            printf("Donnez-moi le nombre d'entiers a entrer : ");
            scanf("%d", &fois);

            int serie[fois], somme = 0;
            for (int i = 0; i < fois; i++) {
                printf("Donnez-moi le %d entier : ", i + 1);
                scanf("%d", &serie[i]);
            }
            for (int i = 0; i < fois; i++) somme += serie[i];

            printf("La somme des %d entiers est : %d\n", fois, somme);
            break;
        }

        case 2: {
            int n1, n2;
            printf("\t\tBienvenue dans le calcul de la soustraction de 2 entiers\n\n");
            printf("Donnez-moi le 1er entier : ");
            scanf("%d", &n1);
            printf("Donnez-moi le 2ème entier : ");
            scanf("%d", &n2);

            printf("La soustraction de %d et %d est : %d\n\n", n1, n2, n1 - n2);
            break;
        }

        case 3: {
            int n1, n2;
            printf("\t\tBienvenue dans le calcul de la division de deux nombres\n\n");

            do {
                printf("Donnez-moi le 1er entier : ");
                scanf("%d", &n1);
                printf("Donnez-moi le 2eme entier : ");
                scanf("%d", &n2);
                if (n2 == 0) {
                    printf("Attention ! La division par zero est indefinie. Veuillez resaisir les entiers.\n");
                }
            } while (n2 == 0);

            printf("La division de %d par %d est : %.2f\n\n", n1, n2, (float)n1 / n2);
            break;
        }

        case 4: {
            int ns;
            printf("\t\tBienvenue dans le calcul de la moyenne d'une serie de nombres\n\n");
            printf("Donnez-moi le nombre d'entiers dans la serie : ");
            scanf("%d", &ns);

            float T[ns], somme = 0;
            for (int i = 0; i < ns; i++) {
                printf("Donnez-moi le %d entier : ", i + 1);
                scanf("%f", &T[i]);
                somme += T[i];
            }

            float Moyenne = somme / ns;
            printf("La moyenne de votre serie de nombres est : %.2f\n\n", Moyenne);
            break;
        }

        case 5: { // Valeur absolue
            int nombre;
            printf("\t\tBienvenue dans le calcul de la valeur absolue d'un nombre\n\n");
            printf("Donnez-moi un entier : ");
            scanf("%d", &nombre);

            printf("La valeur absolue de %d est : %d\n\n", nombre, abs(nombre));
            break;
        }

        case 6: { // Exponentiation
            double base, exp;
            printf("\t\tBienvenue dans le calcul de l'exponentiation\n\n");
            printf("Donnez-moi la base : ");
            scanf("%lf", &base);
            printf("Donnez-moi l'exposant : ");
            scanf("%lf", &exp);

            printf("%.2lf eleve a la puissance %.2lf est : %.2lf\n\n", base, exp, pow(base, exp));
            break;
        }

        case 7: { // Racine carrée
            double nombre;
            printf("\t\tBienvenue dans le calcul de la racine carrée\n\n");
            printf("Donnez-moi un nombre positif : ");
            scanf("%lf", &nombre);

            if (nombre < 0) {
                printf("Erreur : la racine carree d'un nombre negatif n'est pas definie.\n\n");
            } else {
                printf("La racine carree de %.2lf est : %.2lf\n\n", nombre, sqrt(nombre));
            }
            break;
        }

        default:
            printf("Option non valide.\n");
            break;
    }
    //traitement du choix
    int choix;
        printf("Souhaitez-vous :\n");
        printf("1: Revenir au menu principal\n");
        printf("2: Quitter le programme\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        if (choix == 1) goto e; 
        else printf("Vous etes quitter le programme !!!");

    return 0;
}

