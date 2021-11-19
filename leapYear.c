// leapYear check 

#include <stdio.h>
#include <conio.h>

int yearr(int year);
void main(void){
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    (((year & 3) == 0 && (year % 25) != 0) || (year & 15) == 0) ? printf("This is a leap year") :printf("It's not a leap year") ;
    getch();
}
int yearr(int year) {
    ((year % 4 == 0) && (year / 4 != 0))?  1 :  0;
}