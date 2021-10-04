#include "header_file.h"
//extern int var;

int assign_var(array_3D *a_3){
	
	register int i,j,k;
	for(i=0;i<4;i++){
	
	for(j=0;j<3;j++){
	
	for(k=0;k<2;k++){
	
	a_3->arr[i][j][k]=rand();
	}
	}
	}
	
	printf("3D array values:\n");
		for(i=0;i<4;i++){
	
	for(j=0;j<3;j++){
	
	for(k=0;k<2;k++){
	
	printf("%d\t",a_3->arr[i][j][k]);
	}
	printf("\n");
	}
	printf("\n");
	printf("\n");
	}
	
	int *ptr=&(a_3->arr[2][2][2]);
	extern int var;
	var=*ptr;
	return var;
}
