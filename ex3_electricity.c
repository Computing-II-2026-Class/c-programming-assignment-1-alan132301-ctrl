/* Name: Alan Wani Vuciri */
/* Student Number: 25/U/BIO/024/GV*/


#include <stdio.h>

int main(void)
{
    float unitsConsumed, unitPrice;
    
    printf("Enter units consumed:%.2f\n", unitsConsumed);
    scanf("%f", &unitsConsumed);// reading the units consumed from the user and storing it in the variable unitsConsumed
    
    printf("Enter cost per unit:%.2f\n", unitPrice);
    scanf("%f", &unitPrice);// reading the cost per unit from the user and storing it in the variable unitPrice
    
    float totalBill = unitsConsumed*unitPrice;// calculating total cost
    
    printf("Total Bill:%.2f UGX\n", totalBill);
    
    

    return 0;
}
