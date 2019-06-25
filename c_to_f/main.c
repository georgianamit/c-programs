#include <stdio.h>

int main()
{
    float celsius;

    // taking input in degree celsius
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);

    // calculating fahrenheit
    float fahrenheit = (celsius * 1.8) + 32;

    // printing fahrenheit
    printf("The temperature is %0.2f degree fahrenheit.\n", fahrenheit);
    return 0;
}