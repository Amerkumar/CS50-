#include<stdio.h>
#include<cs50.h>
#include <string.h>

int main(void)
{  
    int height;
    char *hash;
    do
    {
            printf("Height : ");
            height = get_int();    
    }
    while(height < 0 | height > 23);
    for(int i=0; i< height; i++){
        char buf[i+1];
        hash = buf;
        memset(hash,'#', i+1);
        buf[i+1] = 0;
        printf("%*s  %s\n",height,hash,hash);
    }    
    
}