*/*/
NAME  :  KAMENE SAMMY KIOKO
REG NO  : CT101/G/26524/25

A PROGRAM TO DETERMINE WETHER A STUDENT QUALIFIES FOR AN EXAM 
*/
#include <stdio.h>

int main() {
    float attendance;
    float averageMarks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    if (attendance >= 75 && averageMarks >= 40) {
        printf("Eligible\n");
    } else {
        printf("Not eligible\n");
    }

    return 0;
}


---

