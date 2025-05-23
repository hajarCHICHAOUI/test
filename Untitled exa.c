int main() {
	int i,max,min,s,n;
	float m,salaire_min, salaire_max;
  char N;
  
  
  	printf("Entrez le nombre d'employes: ");
         scanf("%d",&n);
        int tab[n];
        
	 char noms[n][30];
    float salaires[n];

	for (i = 0; i < n; i++) {
        printf("\nEmploye %d :\n", i);
        printf("Nom : ");
        scanf("%s", noms[i]);
        printf("Salaire : ");
        scanf("%f", &salaires[i]);

}

	s=0;
	for(i = 0; i < n; i++) {
		s=s+tab[i];
	}
	m=s/5;
	printf("\n la moyenne est:%f\n",m);




	max=0;
	min=0;
	for (i = 0; i < n; i++) {


	if ( salaires[i] > salaire_max) {
             salaire_max = salaires[i];
             max = i;}
		
	if (salaires[i] < salaire_min) {
             salaire_min = salaires[i];
             min = i;}
	}
	printf("%d est le max,%d est le min\n",max,min);
	


	return 0;
}
