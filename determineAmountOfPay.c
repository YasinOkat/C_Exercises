#include <stdio.h>

#define PAYRATE 12.00
#define OVERTIME_MULTIPLIER 1.5
#define OVERTIME  40
#define TAXRATE_300 .15
#define TAXRATE_150 .20

int main(){
    
    int hours_worked;
    double gross_pay;
    double taxes;
    double net_pay;

    printf("Enter the hours worked in the week:\n");
    scanf("%d", &hours_worked);

    if (hours_worked > OVERTIME)
    {
        gross_pay = (OVERTIME * PAYRATE) + ((hours_worked - OVERTIME) * (OVERTIME_MULTIPLIER * PAYRATE));
    }
    else
    {
        gross_pay = hours_worked * PAYRATE;
    }

    if (gross_pay <= 300)
    {
        taxes = TAXRATE_150 * gross_pay;
    }
    else if (gross_pay <= 450)
    {
        taxes = (TAXRATE_150 * 300.0) + (gross_pay - 300.0) * (TAXRATE_300);
    }
    else if (gross_pay > 450)
    {
        taxes = (TAXRATE_150 * 300.0) + (gross_pay - 300.0) * (TAXRATE_300) + (gross_pay - 450.0) * (25.0 / 100.0);
    }

    net_pay = gross_pay - taxes;
    
    printf("The total hours worked: %d\n", hours_worked);
    printf("The gross pay: %lf\n", gross_pay);
    printf("The total taxes are: %lf\n", taxes);
    printf("The net pay is: %lf\n", net_pay);

}