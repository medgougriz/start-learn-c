#include <stdio.h>
#include <math.h>

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
    printf("\nYour name is %s\nYour age is %d age\nYour height is %.2f\n", name, age, height);
    printf("%f\n", pow(2, 2));
    printf("%d\n", 5*2);
    printf("%f\n", sqrt(36));
    printf("%f\n", ceil(3.14));
    printf("%f\n", floor(3.14));

    // use constants
    const char[] greeting = "Hello, World!";
    printf("%s\n",greeting);
    return 0;
}