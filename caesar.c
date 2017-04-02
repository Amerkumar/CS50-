#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string args[])
{   
    string plaintext;
    int key;
    if(argc == 2)
    {
        printf("plaintext: ");
        plaintext = get_string();
        key = atoi(args[1]);
        char ciphertext[strlen(plaintext)];
        for(int i = 0, n = strlen(plaintext); i < n; i++)
        {
            if((int)plaintext[i] >= 97 && (int)plaintext[i] < 123)
            {
                ciphertext[i] = (char)(((int)plaintext[i] - 97) + key) % 26 + 97;
            }
            else if((int)plaintext[i] >= 65 && (int)plaintext[i] < 91){
                ciphertext[i] = (char)(((int)plaintext[i] - 65) + key) % 26 + 65;
            }
            else {
                ciphertext[i] = plaintext[i];
            }
        }
        printf("ciphertext: %s\n", ciphertext);
        
    }
    else 
    {
        printf("Usage : ./ceaser k\n");
        return 1;
        
    }
    return 0;
}