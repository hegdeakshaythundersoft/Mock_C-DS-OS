#include<stdio.h>
#include<stdlib.h>
typedef struct s{

	int arr[4][3][2];


}array_3D;
int assign_var(array_3D*);
int var;
char *s1,*s2;
static int count;
void scan_strings(char*,char*);
int compare(char*,char*);
void create_tree();
int pattern_abcd();
//int (*s_fun)(char*,char*)=compare;

