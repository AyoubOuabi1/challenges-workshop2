// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    /*char c,v;
    char arr[]={'a','e','i','o','u','y'};
    int cn,i;
    printf("saisir un char \n");
    scanf("%c",&v);
   
    for (i=0;i<sizeof(arr);i++){
    	printf("\n %c \n",arr[i]);
    	c=arr[i];
    	if(c==v){
			cn=1;
		}else{
			cn=2;
		}
	}
	switch (cn){
		case 1:
			printf("voyelle ");
			break;
		case 2:
			printf("non");
			break;	
	}*/
	char c;
	 //char arr[]={'a','e','i','o','u','y'};
	printf("saisir un char \n");
    scanf("%c",&c);
    switch (c){
    	case 'a':
    		printf("voyelle ");
			break;
		case 'e':
    		printf("voyelle ");
			break;	
		case 'i':
    		printf("voyelle ");
			break;		
		case 'o':
    		printf("voyelle ");
			break;
		case 'u':
    		printf("voyelle ");
			break;
		case 'y':
    		printf("voyelle ");
			break;
		default:
			printf("non ");			
	}
     
    return 0;
}
