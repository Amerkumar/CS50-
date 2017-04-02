#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string args[])
{   
    string plaintext;
    string key = args[1];
    
    int j = 0;
    int keySubString;
    
    if(argc == 2)
    {   
        int key_length = strlen(key);
        for(int i = 0; i < key_length; i++)
        {
            if(isalpha(key[i]))
               {}
            else {
                printf("Keyword must be only A-Z and a-z\n");
                return 1;
            }
        }
        
        printf("plaintext: ");
        plaintext = get_string();
        char ciphertext[strlen(plaintext)];
        int n = strlen(plaintext);
        
        for(int i = 0; i < n; i++)
        {   
            keySubString = toupper(key[j]) - 65;
            if((int)plaintext[i] >= 97 && (int)plaintext[i] < 123)
            {  
                ciphertext[i] = (char)(((int)plaintext[i] - 97) + keySubString) % 26 + 97;
                 j++;
                
            }
            else if((int)plaintext[i] >= 65 && (int)plaintext[i] < 91){
                ciphertext[i] = (char)(((int)plaintext[i] - 65) + keySubString) % 26 + 65;
                j++;
                
            }
            else {
                ciphertext[i] = plaintext[i];
            }
            
            if(j == key_length)
            {
                j = 0;    
            }
            
        }
        printf("ciphertext: ");
        for(int k = 0; k < n ; k++)
        printf("%c", ciphertext[k]);
        printf("\n");
    }
    else 
    {
        printf("Usage : %s <keyword>\n",args[0]);
        return 1;
        
    }
    return 0;
}