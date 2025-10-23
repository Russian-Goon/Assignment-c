


/*
Name:KAMENE SAMMY KIOKO
Regestraion number:CT101/G/26524/25
Description:      A.PROGRAM TO CONVERT DEGREE CELCIOUS
*/
#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperature in Celsius = %.2f°C\n", convertToCelsius(fahrenheit));
    return 0;
}