#include<stdio.h>
#include<math.h>

int main() {
    float num;
    scanf("%f",&num);
    if( fmodf(num,1.0) != 0){
        printf("This is a decimal number. Only integer is allowed");
    }else{ 
        printf("This is an integer");
}
}