#include <stdio.h>

int main() {
    // Write C code here
    int annee,c;
    printf("saisir l'annee \n");
    scanf("%d",&annee);
    printf("saisir votre nomber  \n");
    printf("1 mois \n");
    printf("2 Jours \n");
    printf("3 Heures \n");
    printf("4 Minutes \n");
 	printf("5 Secondes \n");	   
    scanf("%d",&c);
    
    switch(c){
    	case 1:
    		printf("les nombers des mois est : %d",	mois(annee));
    		break;
    	case 2:
    		printf("les nombers des jours est : %d",jours(annee));
    		break;
    	case 3:
    		printf("les nombers des heures est : %d",heures(annee));
    		break;
    	case 4:
    		printf("les nombers des minutes est : %d",minutes(annee));
    		break;
    	case 5:
    		printf("les nombers des secondes est : %d",secondes(annee));
    		break;
     
	}
    
 
    return 0;
}
int mois(int i){
	return i*12;
}
int jours(int i){
	return i*365;
}
int heures(int i){
	return jours(1)*30*24;
}
int minutes(int i){
	return  jours(1)*30*24*60;
}
int secondes(int i){
	return  jours(1)*30*24*60*60;
}
