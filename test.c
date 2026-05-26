#include <stdio.h>

int main(){
    char name[10];
    int age;
    float height;
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your height in meters:");
    scanf("%f",&height);
    printf("\nYour name is %s\nYour age is %d age\nYour height is %.2f", name, age, height);
}