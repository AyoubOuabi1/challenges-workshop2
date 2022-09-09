#include <stdio.h>
 
int main() {
    // Write C code here
    char m1[100]="abc d e ",m2[100]=" ea db c";
    char m3[100];
    char arr[100][100];
    int i,j;
    printf("saisir la 1er chaines de caracteres \n");
    scanf("%[^\n]%*c",&m1);
    printf("saisir la 2eme chaines de caracteres \n");
    scanf("%[^\n]%*c",&m2);
    for(i=0;i<100;i++){
    	for(j=0;j<100;j++){
    		if(m1[i]==m2[j]){
    			arr[i][j]=[i][j];
			}else{
				printf("f");
			}
		}
	}
 	//printf("%s,%s",m1,m2);
 	
    return 0;
}
