#include <stdio.h>
struct infos {    
  	char num_Matr[100];            
  	char nom[100];   
	int age;    
	int note[20];         
};
int main() {
	
	struct infos in;
	int n,i;
    printf("saisir la matricule : \n");
    scanf("%[^\n]%*c",&in.num_Matr);
	printf("saisir le nom : \n");
    scanf("%[^\n]%*c",&in.nom);
    printf("saisir l'age  : \n");
    scanf("%d",&in.age);
    printf("saisir la nomber des notes : \n");
    scanf("%d",&n);
    
    for (i=0;i<n;i++){
    	 printf("saisir la  note %d  \n",i+1);
    	 scanf("%d",&in.note[i]);
	}
    printf(" le matricule est : %s, le nom est : %s , l'age est : %d et les notes est  :\n",in.num_Matr,in.nom,in.age);
    for (i=0;i<n;i++){
    	 printf("la  note %d est : %d \n",i+1,in.note[i]);
     
	}

    return 0;
}
