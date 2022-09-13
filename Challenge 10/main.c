#include <stdio.h>
#include <stdbool.h> 
bool divededby(int a,int b);
bool isPremier(int a);

int main(){
	
	int a,b;
	printf("saisir un nomber A \n ");
	scanf("%d",&a);
	
	printf("saisir un nomber B \n ");
	scanf("%d",&b);
	
	if (divededby(a,b)){
		printf("le reste de la division A  par B est  un nomber premier ");
	}else {
		printf("le reste de la division A  par B est pas un nomber premier");
	}
}

bool divededby(int a,int b){
	int m=a/b;
 	if(isPremier(m)){
		return true;
	}else {
		return false;
	}
 
	
	
}
bool isPremier(int a){
	int i;

	if(a!=1){
		for(i=2;i<a;i++){
			if(a%i==0){
				return false;
			}
		}	
	}
	return true;
	
}
