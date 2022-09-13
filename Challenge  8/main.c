#include <stdio.h>


int main(){
	int a,b;
	printf("saisir la nomber A : \n");
	scanf("%d",&a);
	
	printf("saisir la nomber B : \n");
	scanf("%d",&b);
	//Supprimez la valuer d'origin de A et remplacez-la par la valeur de B et Supprimez la valuer d'origin de B et remplacez-la par la valeur de A
	echanger(a,b);
}
int echanger(int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
	printf("la valuer  de A est : %d,et la valuer  de B est : %d",a,b);
	return 0;
}
