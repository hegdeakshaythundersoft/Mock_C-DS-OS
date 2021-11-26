/*size of var without sizeof() and ptr arithmetic*/
#include <stdio.h>

int main()
{
    
    
    register int i;
    int variable=32,copy;
    int size;
    copy=variable|1;
    for(i=1;copy!=0;i++){
        
        copy<<=1;
        size=i/8;
    }
    printf("size=%d\n",size);

    return 0;
}
