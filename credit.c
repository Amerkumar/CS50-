#include<cs50.h>
#include<stdio.h>

int main(void)
{   
    printf("Number: ");
    long creditCard = get_long_long();
    int sum = 0;
    int sum2 = 0;
    int temp;
    int total;
    int check;
    while(creditCard > 10){
        sum = sum + (creditCard % 10);
        creditCard = creditCard / 10;
        temp = ((creditCard % 10) * 2);
        if(temp < 10){
            sum2 = sum2 + ((creditCard % 10) * 2);
        }
        else {
            sum2 = sum2 + temp % 10;
            temp = temp / 10;
            sum2 = sum2 + temp;
        }
        if(creditCard < 10){
            check = creditCard;
        }
        else{
            check = creditCard / 10;
        }
        creditCard = creditCard / 10;
        
    }
    sum = sum + creditCard;
    
    total = sum + sum2;
    
    
    if(total % 10 == 0){
        
    switch(check){
        case 3:
            printf("AMEX\n");
            break;
        case 4:
            printf("VISA\n");
            break;
        case 5:
            printf("MASTERCARD\n");
            break;
        }
    }
    else {
            printf("INVALID\n");
    }    
    
    
}