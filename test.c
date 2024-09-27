#include <stdio.h>
#include <math.h>

int main() {
    int choix;
    int i, N;
    float A, B, p, nem, S, C;

    do {
        printf("1. Addition                     \n");
        printf("2. Soustraction                 \n");
        printf("3. Multiplication               \n");
        printf("4. Division                     \n");
        printf("5. Moyenne                     \n");
        printf("6. Valeur absolue              \n");
        printf("7. Exponentiation               \n");
        printf("8. Racine carrée               \n");
        printf("9. Quitter                     \n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                C = 0;
                printf("Combien de nombres voulez-vous entrer : ");
                scanf("%d", &N);
                for (i = 0; i < N; i++) {
                    printf("Entrer le nombre %d : ", i + 1);
                    scanf("%f", &nem);
                    C += nem;
                }
                printf("La somme de vos nombres est : %.2f\n", C);
                break;
            case 2:
                printf("Entrer le premier nombre : ");
                scanf("%f", &A);
                printf("Entrer le deuxieme nombre : ");
                scanf("%f", &B);
                S = A - B;
                printf("La soustraction de deux nombres est : %.2f\n", S);
                break;
            case 3:
                p = 1;
                printf("Combien de nombres voulez-vous multiplier ? ");
                scanf("%d", &N);
                for (i = 0; i < N; i++) {
                    printf("Entrer le nombre : ");
                    scanf("%f", &nem);
                    p *= nem;
                }
                printf("Le produit de vos nombres est : %.2f\n", p);
                break;
            case 4:
                printf("Entrer le numerateur : ");
                scanf("%f", &A);
                printf("Entrer le denominateur : ");
                scanf("%f", &B);
                if (B != 0) {
                    printf("La division est : %.2f\n", (A / B));
                } else {
                    printf("Erreur : division par 0 est impossible\n");
                }
                break;
            case 5:
                S = 0;
                printf("Combien de nombres voulez-vous entrer : ");
                scanf("%d", &N);
                if (N > 0) {
                    for (i = 0; i < N; i++) {
                        printf("Entrez le nombre %d : ", i + 1);
                        scanf("%f", &nem);
                        S += nem;
                    }
                    printf("La moyenne est : %.2f\n", (S / N));
                } else {
                    printf("Entrez un nombre superieur a 0 : \n");
                }
                break;
            case 6:
                printf("Entrez un nombre : ");
                scanf("%f", &nem);
                printf("La valeur absolue est : %.2f\n", fabs(nem));
                break;
            case 7:
                printf("Entrez la base : ");
                scanf("%f", &A);
                printf("Entrez l'exposant : ");
                scanf("%f", &B);
                printf("Le resultat est : %.2f\n", pow(A, B));
                break;
            case 8:
                printf("Entrez un nombre positif : ");
                scanf("%f", &nem);
                if (nem < 0) {
                    printf("Erreur : entrez un nombre positif.\n");
                } else {
                    printf("La racine carrée est : %.2f\n", sqrt(nem));
                }
                break;
            case 9:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide.\n");
        }

    } while (choix != 9);

    return 0;
}