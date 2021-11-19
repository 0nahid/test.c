// show result using user input 
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    (age>=18)?printf("You are an adult & your age is %d\n", age):printf("You are a child & your age is %d\n", age);
    return 0;
}