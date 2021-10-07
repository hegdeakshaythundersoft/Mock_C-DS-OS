#include "header_file.h"

int main()  
{     
	int (*s_fun)(char*,char*)=&compare;
	extern int var;
	extern char *s1,*s2;
	int i,j,k,l;
	printf("%d\n",rand());/*just a test on rand() function*/
	array_3D node,*sptr=&node;
	 assign_var(sptr);
	printf("\n arr[2][2][2]=var %d\n",var);
	goto flow;
pattern:
	for(i=0;i<=5;i++){
	l=0;
	for(j=i;j>0;j--){
	printf(" ");
	for(k=j;k<=j;k++){
	printf("%c",'a'+l);
	l++;
	}
	}
	printf("\n");
	}
	goto end;
 
flow:
	var=1;
	if(var&1)// Even
		create_tree();

	else { // ODD
	scan_string1();
	scan_string2();
       }
        if(!(var%10))
         goto pattern;
        //pattern_abcd();
       // printf("%s",((*s_fun)(s1,s2))?"Not-Equal":"Equal");
        //goto pattern;
end:	printf("************DONE****************\n");
	
	return 0;    
} 
