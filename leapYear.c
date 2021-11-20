// leapYear check 

#include <stdio.h>
#include <conio.h>
#include<math.h>

int checkYear(int year);
int main(void){
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    (((year & 3) == 0 && (year % 25) != 0) || (year & 15) == 0) && ( fmodf(year,1.0) != 0) ? printf("This is a leap year") :printf("It's not a leap year") ;
    getch();
}
int checkYear(int year) {
    ((year % 4 == 0) && (year / 4 != 0))?  1 :  0;
}