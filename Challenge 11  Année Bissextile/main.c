#include <stdio.h>
#include <stdbool.h> 
bool is_leap_year(int a);
int main(){
	
	int a;
	printf("saisir un nomber \n ");
	scanf("%d",&a);
	if (is_leap_year(a)){
		printf("%d est une année est bissextile ",a);
	}else {
		printf("%d pas une année est bissextile ",a);
	}
}

bool is_leap_year(int a){
	int i;
	if(a%400!=0){
		if(a%4==0&&a%100!=0){
			return true;
		
		}
	}else {
		return true;
	}
	
	return false;
	
}
