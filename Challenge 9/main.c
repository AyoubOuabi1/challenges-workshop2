#include <stdio.h>
#include <stdbool.h> 
bool isPremier(int a);
int main(){
	
	int a;
	printf("saisir un nomber \n ");
	scanf("%d",&a);
	if (isPremier(a)){
		printf("nomber A est un nomber premier ");
	}else {
		printf("nomber A pas un nomber premier");
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

