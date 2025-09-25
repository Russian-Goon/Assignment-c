/*
Name:SAMMY KIOKO KAMENE
Regestraion number:CT101/G/26524/25
Description:PROGRAM TO FIND VOLUME AND SURFACE AREA OF CYLINDER
    VOLUME=
    SURFACE AREA=
*/
#include <stdio.h>
int main () {
	
//
float radius,height,volume,surface_area;

//promting user to enter radiuss
printf ("Enter radius:\n");
scanf ("%f",&radius);

//promting user to enter height
printf ("Enter height:\n");
scanf ("%f",&height);

//formula for calculating volume
volume=3.142*radius*radius*height;
printf("volume:%.1fcm^3\n",volume);

//formula for calculating surface area
surface_area=(2*3.142*radius*radius)+(2*3.142*height);
printf ("surface_area:%.1fcm^2",surface_area );

return 0;
		
}