#include <stdio.h>

int main() {
    // Write C code here
    int nmb1,nmb2,sm;
    printf("saisir la 1er nomber \n");
    scanf("%d",&nmb1);
    printf("saisir la 2eme nomber \n");
    scanf("%d",&nmb2);
    if(nmb1!=nmb2){
    	sm=nmb1+nmb2;
	}else {
		sm=(nmb1+nmb2)*3;
	}
	printf("la somme est : %d ",sm);

    return 0;
}
