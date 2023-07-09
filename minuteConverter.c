#include <stdio.h>

int main(){

    int minutes;
    double minutes_in_year;
    double years;
    double days; 

    printf("Enter a number:\n");
    scanf("%d", &minutes);

    minutes_in_year = (60 * 24 * 365);
    years = minutes / minutes_in_year;
    days = ((minutes / 60) / 24);

    printf("The %d minutes in year and days is: %lf years and %lf days\n", minutes, years, days);

    
}