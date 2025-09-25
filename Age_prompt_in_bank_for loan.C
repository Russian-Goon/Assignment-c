/*
Name:KAMENE SAMMY KIOKO
Regestraion number:CT101/G/26524/25
Description:      A.PROGRAM TO INPUT
          1.AGE:IF USER IS 21 YEARS AND ABOVE ANNUAL INCOME 21000 AND WILL GET LOAN
          2.ANNNUAL INCOME
                  B.PROGRAM TO OUTPUT
          1.CONGRATULATION YOU QUALIFY FOR A LOAN: IF ABOVE 21 YEARS
          2.UNFORTUNATELY,WE ARE UNABLE TO OFFER YPU ALOAN AT THIS TIME:
            BELOW 21 YEARS
*/
#include <stdio.h>
int main() {
	
	//prompting the user to input required data
    int age;
   float annualincome;
    
    ///prompting the user to enter age
    printf("Enter your age:\n");
    scanf ("%d",&age);
    
    //prompting the user to enter annnual_income
    printf ("Enter your annualincome:\n");
    scanf ("%f",&annualincome);
    
    //expected output after input of data
    if (age>=21 && annualincome >=21000){
    	printf ("Congratulation you qualify for a loan.");
	}
    else {
    	printf("Unfortunately, we are unable to offer you a loan at this time.");
	}
    
    
	return 0;
	
}