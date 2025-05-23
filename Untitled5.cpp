#include <stdio.h>

int main() {
    int nombre_employes;

    // Demander à l'utilisateur de saisir le nombre d'employés
    printf("Entrez le nombre d'employés : ");
    scanf("%d", &nombre_employes);

    // Déclaration des tableaux pour stocker les noms et les salaires
    char noms[nombre_employes][50];  // Tableau pour les noms (50 caractères max par nom)
    float salaires[nombre_employes]; // Tableau pour les salaires

    // Saisie des informations pour chaque employé
    for (int i = 0; i < nombre_employes; i++) {
        printf("Entrez le nom de l'employé %d : ", i + 1);
        scanf("%s", noms[i]);  // Lire le nom de l'employé

        printf("Entrez le salaire de %s : ", noms[i]);
        scanf("%f", &salaires[i]);  // Lire le salaire de l'employé
    }

    // Affichage des employés et de leurs salaires
    printf("\nListe des employés et leurs salaires :\n");
    for (int i = 0; i < nombre_employes; i++) {
        printf("%s : %.2f MAD\n", noms[i], salaires[i]);
    }

    return 0;
}
