#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{   
    short check = 0;
    string name = get_string();
    char result[10];
    int j = 0;
    for(int i = 0, n = strlen(name); i < n; i++)
    {   
        if((int)name[i] != 32)
        {
            check++;
            if(check == 1)
            {
                if((int) name[i] >= 97 )
                    result[j] = name[i] - 32;
                else
                    result[j] = name[i];
                    
              j++;
            }
        }
        else 
        {
            check = 0;
        }
    }
    result[j] = '\0';
    printf("%s\n", result);
    
}