/* Name: Alan Wani Vuciri */
/* Student Number: 25/U/BIO/024/GV*/


#include <stdio.h>

int main(void)
{
	
float distanceTravelled;
printf("Enter distance(km):%.2f\n", distanceTravelled);
scanf("%f", &distanceTravelled);// reading the distance travelled from the user and storing in the variable distanceTravelled

float fuelUsed;
printf("Enter fuel used(liters):%.2f\n", fuelUsed);
scanf("%f", &fuelUsed);

float fuelEfficiency;
fuelEfficiency = distanceTravelled/fuelUsed;// calculating fuel efficiency 

printf("Fuel efficiency: %.2f km/L\n", fuelEfficiency);// printing result



    return 0;
}