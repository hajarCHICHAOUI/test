#include <stdio.h>

int main() {
    int y;
    int i;
    
	printf("Entrez le nombre d'elements dans le tableau: ");
    scanf("%d",&y);
    int T[y];
    
    printf("Entrez les %d elements du tableau:\n", y);
    for (i=0;i<y;i++) {
        printf(" Element %d: ", i+1);
        scanf("%d",&T[i]);
    }
    
	printf("\n Les elements du tableau sont:\n");
    for (i = 0; i < y; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
