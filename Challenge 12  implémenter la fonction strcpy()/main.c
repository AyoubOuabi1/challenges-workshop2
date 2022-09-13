#include <stdio.h>
#include <string.h>


char *copy(char *source){
	int i=0,sourceLen=0;
	char *destination;
 	while(source[sourceLen]){
		sourceLen++;
		
	}
	destination = (char *) malloc( (sourceLen+1) * sizeof(char) );
	
	while(source[i]){
		destination[i]=source[i];
		i++;
	}
     
 	return  destination;
	
}
int main()
{
    char *source, *destination;
    printf("saisir un mot \n");
    scanf("%s",source);
     
	destination=copy(source);
	printf("%s",destination);
    return 0;
}

