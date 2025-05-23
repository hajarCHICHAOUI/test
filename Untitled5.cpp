#include <stdio.h>

int main() {
    int nombre_employes;

    // Demander � l'utilisateur de saisir le nombre d'employ�s
    printf("Entrez le nombre d'employ�s : ");
    scanf("%d", &nombre_employes);

    // D�claration des tableaux pour stocker les noms et les salaires
    char noms[nombre_employes][50];  // Tableau pour les noms (50 caract�res max par nom)
    float salaires[nombre_employes]; // Tableau pour les salaires

    // Saisie des informations pour chaque employ�
    for (int i = 0; i < nombre_employes; i++) {
        printf("Entrez le nom de l'employ� %d : ", i + 1);
        scanf("%s", noms[i]);  // Lire le nom de l'employ�

        printf("Entrez le salaire de %s : ", noms[i]);
        scanf("%f", &salaires[i]);  // Lire le salaire de l'employ�
    }

    // Affichage des employ�s et de leurs salaires
    printf("\nListe des employ�s et leurs salaires :\n");
    for (int i = 0; i < nombre_employes; i++) {
        printf("%s : %.2f MAD\n", noms[i], salaires[i]);
    }

����return�0;
}
