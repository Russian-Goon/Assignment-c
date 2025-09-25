/*
Name:KAMENE SAMMY KIOKO 
Regestraion number:CT101/G/26524/25
Description:PROGRAM TO PROMPT THE USER TO ENTER:
             1.HEIGHT
             2.BANK BALANCE
             3.PHONE NUMBER
*/

#include <stdio.h>
int main() {
	
    //PROMPTING USER TO ENTER HEIGHT
    int height;
    printf("Enter your height:");
    scanf("%d",&height);
    
    
    //PROMPTING USER TO ENTER BANK_BALANCE
    int bank_balance;
    printf("Enter bank_balance:");
    scanf("%d",&bank_balance);
    
    
    //PROMPTING USER TO ENTER PHONE_NUMBER
    int phone_number;
    printf("Enter phone_number:");
    scanf("%d",&phone_number);
    
    
    //summary of data input
    printf("height:%d\n",height);
    printf("bank_balance %d\n",bank_balance);
    printf("phone_no %d\n",phone_number);
    
    return 0;
}