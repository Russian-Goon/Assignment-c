/*
Name: Kamene Sammy Kioko
Reg No: CT101/G/26524/25
Description: Number guessing game
*/

#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 

int main(){
	int secret_Number, guess;
	 //Initialize randon number generator srand(time(0));
	 //generate a random number between 1 and 20 (inclusive)
	 
	 int secretNumber = (rand() %20) + 1;
	 printf("Welcome to the number guessing game! \n");
	 printf("I have selected a number between 1 and 20 \n");
	 printf("Can you guess what it is? \n");
	 
	 //repeat until user guesses the number correctly
	 
	 do{
		 printf("Enter your guess:");
		 scanf("%d", &guess);
		 
		 if(guess> secret_Number);{
			 printf("Too high!\n");
		 
	     if(guess < secret_Number);{
			 printf("Too low!\n");
		 }{}
			 printf("Congratulations! You guessed the number! \n");
		 }
		 }while (guess != secret_Number);
		 
   return 0;
}