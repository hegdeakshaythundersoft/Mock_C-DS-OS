/*Swaping alternative bits of a char
     I/p: 10 01 01 01
     O/p: 01 01 10 01*/
#include <stdio.h>

int main()
{
    unsigned char a=149,b,c,d;/*149=10 01 01 01 106=01 10 10 10*/
    b=~a&170;/*10 10 10 10*/
    c=~a&85;/*01 01 01 01*/
    d=b|c;
    printf("original = %d swapped= %d\n",a,d);
    return 0;
}
