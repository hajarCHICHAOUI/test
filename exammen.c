//#include <stdio.h>
//
//int main() {
//    int n, i;
//    
//    printf("Entrez le nombre d'employés : ");
//    scanf("%d", &n);
//    
//    char noms[n][50];
//    float salaires[n];
//    
//    float somme = 0, salaire_min, salaire_max;
//    int min_index = 0, max_index = 0;
//
//    for (i = 0; i < n; i++) {
//        printf("\nEmployé %d :\n", i + 1);
//        printf("Nom : ");
//        scanf("%s", noms[i]);
//        printf("Salaire : ");
//        scanf("%f", &salaires[i]);
//
//        somme += salaires[i];
//
//        if (i == 0 || salaires[i] < salaire_min) {
//            salaire_min = salaires[i];
//            min_index = i;
//        }
//        if (i == 0 || salaires[i] > salaire_max) {
//            salaire_max = salaires[i];
//    max_index = i;
//        }
//    }
//
//    printf("\nListe des employés et leurs salaires :\n");
//    for (i = 0; i < n; i++) {
//        printf("%s : %.2f\n", noms[i], salaires[i]);
//    }
//
//    printf("\nMoyenne des salaires : %.2f\n", somme / n);
//    printf("Salaire minimum : %.2f (Employé : %s)\n", salaire_min, noms[min_index]);
//    printf("Salaire maximum : %.2f (Employé : %s)\n", salaire_max, noms[max_index]);
//
//    return 0;
//}
