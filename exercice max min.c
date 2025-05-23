#include<stdio.h>
int main(){
	int i,max,min;
	int tab[5];
	 
	 for (i=0;i<5;i++) {
       printf("Entrez les 5 elements du tableau:\n");
        scanf("%d",&tab[i]);
        
    }
    	max=tab[0];
    	min=tab[0];
    for (i=0;i<5;i++){
    
    	
		if (tab[i]>max){
			max=tab[i];
		}
		if (tab[i]<min){
			min=tab[i];
		}
	}
	printf("%d est le max,%d est le min",max,min);
	
}
