#include <stdio.h>
 
int main() {
    // Write C code here
    char m1[4];
    char m2[4];
    int c,i;
    printf("saisir la 1er chaines de caracteres \n");
    scanf("%s",&m1);
    printf("saisir la 2eme chaines de caracteres \n");
    scanf("%s",&m2);
    
    for(i=0;i<4;i++){
    	if(m1[i]==m2[i]){
    		c++;
		}
		else{
			break;
		}
	}
	if(c==4){
		printf("Anagramme");
	}else {
		printf("Pas d'anagramme !");
	}
    /*printf("saisir la taille de la  1er chaines de caracteres \n");
    scanf("%d",&t1);
    printf("saisir la taille de la 2eme chaines de caracteres \n");
    scanf("%d",&t2);
    
    char m1[t1];
    char m2[t2];
    char arr[t1+t2];
    int i,j;
    for (i=0;i<sizeof(m1),i++){
    	printf("\n saisir la caracter nomber : %d ",i);
    	scanf("%c",arr[i]);
	}
	for (i=0;i<sizeof(m1),i++){
    	printf("\n saisir la caracter nomber : %d \n",i);
    	scanf("%c",arr[i]);
	}
  
    
    for(i=0;i<100;i++){
    	for(j=0;j<100;j++){
    		if(m1[i]==m2[j]){
    			arr[i][j]=[i][j];
			}else{
				printf("f");
				break
				
			}
		}
	}*/
 	//printf("%s,%s",m1,m2);
 	
    return 0;
}
