#include <stdio.h>

int main() {
    int n;
    int i;
    
	printf("Entrez le nombre d'elements dans le tableau: ");
    scanf("%d",&n);
    int T[n];
    
    printf("Entrez les %d elements du tableau:\n", n);
    for (i=0;i<n;i++) {
        printf(" Element %d: ", i+1);
        scanf("%d",&T[i]);
    }
    
	printf("\n Les elements du tableau sont:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
