 #include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100
#define MAX_STRING 100
#define MAX_CHAR 30

struct Contact {
    char nom[MAX_STRING];
    char telephone[MAX_CHAR];
    char email[MAX_STRING];
};

struct Contact contacts[MAX_CONTACTS];
int compte = 0;

void ajouter_contact() {
    if (compte >= MAX_CONTACTS) {
        printf("La liste des contacts est pleine !\n");
        return;
    }
    printf("Entrez le nom : ");
    scanf(" %[^\n]s", contacts[compte].nom);
    printf("Entrez le numero de telephone : ");
    scanf(" %[^\n]s", contacts[compte].telephone);
    printf("Entrez l'adresse e-mail : ");
    scanf(" %[^\n]s", contacts[compte].email);
    compte++;
    printf("Contact ajoute avec succes !\n");
}

void afficher_contacts() {
    if (compte == 0) {
        printf("Aucun contact a afficher.\n");
        return;
    }
    for (int i = 0; i < compte; i++) {
        printf("Contact %d : %s, %s, %s\n", i + 1, contacts[i].nom, contacts[i].telephone, contacts[i].email);
    }
}

void rechercher_contact() {
    char nom[MAX_STRING];
    printf("Entrez le nom a rechercher : ");
    scanf(" %[^\n]s", nom);
    for (int i = 0; i < compte; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            printf("Trouve : %s, %s, %s\n", contacts[i].nom, contacts[i].telephone, contacts[i].email);
            return;
        }
    }
    printf("Contact non trouve.\n");
}

void modifier_contact() {
    char nom[MAX_STRING];
    printf("Entrez le nom a modifier : ");
    scanf(" %[^\n]s", nom);
    for (int i = 0; i < compte; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            printf("Nouveau numero : ");
            scanf(" %[^\n]s", contacts[i].telephone);
            printf("Nouvelle adresse e-mail : ");
            scanf(" %[^\n]s", contacts[i].email);
            printf("Contact modifie avec succes !\n");
            return;
        }
    }
    printf("Contact non trouve.\n");
}

void supprimer_contact() {
    char nom[MAX_STRING];
    printf("Entrez le nom a supprimer : ");
    scanf(" %[^\n]s", nom);
    for (int i = 0; i < compte; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            for (int j = i; j < compte - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            compte--;
            printf("Contact supprime avec succes !\n");
            return;
        }
    }
    printf("Contact non trouve.\n");
}

int main() {
    int choix;
    do {printf("--------gestion de contact-----------");
       printf("\n|1. Ajouter un contact              |\n");
       printf("|2. Afficher les contacts           |\n");
       printf("|3. Rechercher un contact           |\n");
       printf("|4. Modifier un contact             |\n");
       printf("|5. Supprimer un contact            |\n");
       printf("|6. Quitter                         |\n");
       printf("|___________________________________|\n");
       printf("Choisissez une option :  ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: ajouter_contact(); break;
            case 2: afficher_contacts(); break;
            case 3: rechercher_contact(); break;
            case 4: modifier_contact(); break;
            case 5: supprimer_contact(); break;
            case 6: printf("See you !\n"); break;
            default: printf("Choix invalide !\n");
        }
    } while (choix != 6);
    return 0;
}
