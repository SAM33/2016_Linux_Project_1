#include <stdio.h>
#include "address_space_survey.h"
#include <string.h>
#define SIZE 1000000
int a[SIZE]; 
void main()
{ 
    int result[1024] = {1};
    memset(result,0x0,sizeof(int)*1024);
    memset(a,0x0,sizeof(int)*SIZE);
    printf("Hello World!\n");
    address_space_survey(0,767, result);
    int i;
    for(i=0 ; i<1024 ; i++) {
        if(result[i]!=0)
            printf("index[%d]=%d\n",i,result[i]);
    } 
}   
