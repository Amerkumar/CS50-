#include <unistd.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <crypt.h>

#define ARRAY_LENGTH 52
#define TOTAL_LETTERS 26
#define _XOPEN_SOURCE
int main(int argc, string argv[])
{   
    char alphabetArray[ARRAY_LENGTH];
    char a[5];
    char *guess = a;
    string key = argv[1];
    char temp[2];
    char *salt = temp;
    char * password;
    
    for(int i = 0; i < TOTAL_LETTERS;i++){
        alphabetArray[i] = (char)(i+65);
    }
    for(int i = 0, j =26; i < TOTAL_LETTERS;j++,i++){
        alphabetArray[j] = (char)(i+97);
    }
    
    // string guess = "abc";
    // char temp[2];
    // temp[0] = '5';
    // temp[1] = '0';
    // char *salt = temp;
    // password = crypt(guess,salt);
    // printf("%s\n",password);        
    if(argc == 2)
    {    temp[0] = argv[1][0];
         temp[1] = argv[1][1];
        for(int i = 0; i < ARRAY_LENGTH; i++){
            guess[0] = alphabetArray[i];
            guess[1] = '\0';
            password = crypt(guess,salt);
            if(strcmp(password,key) == 0){
                printf("%s\n",guess);
                return 0;
                break;
            }
        }
        
        
        for(int i = 0; i < ARRAY_LENGTH; i++){
            guess[0] = alphabetArray[i];
            for(int j = 0; j < ARRAY_LENGTH ; j++){
                guess[1] = alphabetArray[j];
                guess[2] = '\0';
                password = crypt(guess,salt);
                if(strcmp(password,key) == 0){
                    printf("%s\n",guess);
                    return 0;
                    break;
                }
            }
        }
        
        
        for(int i = 0; i < ARRAY_LENGTH; i++){
            guess[0] = alphabetArray[i];
            for(int j = 0; j < ARRAY_LENGTH ; j++){
                guess[1] = alphabetArray[j];
                for(int k = 0; k < ARRAY_LENGTH; k++){
                    guess[2] = alphabetArray[k];
                    guess[3] = '\0';
                
                   password = crypt(guess,salt);
                    if(strcmp(password,key) == 0){
                        printf("%s\n",guess);
                        return 0;
                        break;
                    }
                }
            }
        }
        
        
        for(int i = 0; i < ARRAY_LENGTH; i++){
            guess[0] = alphabetArray[i];
            for(int j = 0; j < ARRAY_LENGTH ; j++){
                guess[1] = alphabetArray[j];
                for(int k = 0; k < ARRAY_LENGTH; k++){
                    guess[2] = alphabetArray[k];
                    for(int l = 0; l < ARRAY_LENGTH; l++){
                        guess[3] = alphabetArray[l];            
                        guess[4] = '\0';
        
                        password = crypt(guess,salt);
                        if(strcmp(password,key) == 0){
                            printf("%s\n",guess);
                            return 0;
                            break;
                        }
                    }
                }
            }
        }
    }
    
    else 
    {
        printf("Usage : %s hash\n",argv[0]);
        return 1;
    }
}