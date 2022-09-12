#include <stdio.h>


int main(){
	int a,b;
	printf("saisir la nomber A : \n");
	scanf("%d",&a);
	
	printf("saisir la nomber B : \n");
	scanf("%d",&b);
	//Supprimez la valuer d'origin de A et remplacez-la par la valeur de b
	printf("la valuer  de A est : %d",echanger(a,b));
}
int echanger(int a,int b){
	return a=b;
}
