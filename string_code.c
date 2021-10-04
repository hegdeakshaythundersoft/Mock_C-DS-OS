#include "header_file.h"
extern int count;
extern char *s1,*s2;

int compare(char *s1,char *s2){

	if((*s1=='\0')&&(*s2=='\0'))
		return count;
	if(*s1==*s2){
		count++;
	return compare(s1+1,s2+1);
	
	}
	else 
	return -1;



}

void scan_strings(char *s1,char *s2){

	printf("Enter the STRING 1\n");
	scanf("%s",s1);
	printf("\n");
	printf("Enter the STRING 2\n");
	scanf("%[^\n]s",s2);
}


