#include <stdio.h>


int main(){
	int a,b;
	printf("saisir la nomber A : \n");
	scanf("%d",&a);
	
	printf("saisir la nomber B : \n");
	scanf("%d",&b);
	
	printf("la somme de A+B est : %d",add(a,b));
}
int add(int a , int b){
	return a+b;
}
