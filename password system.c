/*
Name: Kamene Sammy Kioko
Reg No:CT101/G/26524/25
Description:Password system
*/

//predecessor directive
#include<stdio.h>

//Variable declaration
int main() {
	int password;
	
	do{
		//print a message asking the user to enter their password
		printf("\n Enter your password.\n");
		scanf("%d", &password);
		//Checks whether the entered password equals 1234
		if(password==1234) {
			break;
		}
		printf("\nIncorrect password! Please try again. \n");
	}
	//End the loop. While(1) means loop forever until a break statement 
	while(1);
	printf("\nAccess granted. \n");
    printf("Welcome.");
    
    return 0;
}
