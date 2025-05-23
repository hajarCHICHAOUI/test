#include <stdio.h>

int main() {
	int i,max,min,s;
	float m;
	int tab[5];


	
	for (i=0; i<5; i++) {
		printf(" Element %d: ", i);
		scanf("%d",&tab[i]);
	}
       printf("\n Les elements du tableau sont:");
	   for (i = 0; i < 5; i++) {
       printf("\n%d\n", tab[i])  ;
     	}



	s=0;
	for(i = 0; i < 5; i++) {
		s=s+tab[i];
	}
	m=s/5;
	printf("\n la moyenne est:%f\n",m);



	max=tab[0];
	min=tab[0];
	for (i = 0; i < 5; i++) {


		if (tab[i]>max) {
			max=tab[i];
		}
		if (tab[i]<min) {
			min=tab[i];
		}
	}
	printf("%d est le max,%d est le min\n",max,min);
	


	return 0;
}
