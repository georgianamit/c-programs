#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char num[100];
    int d, sum = 0, temp = 0;
    printf("Enter a number: ");
    scanf("%s", num);

    int order = strlen(num);
    int i;
    for (i = 0; num[i] != '\0'; i++)
    {
        d = (num[i] - '0');
        sum += pow(d, order);
        temp = (temp * 10) + d;
    }

    if (sum == temp)
        printf("%s is an Armstrong number.\n", num);
    else
        printf("%s is not an Armstrong number.\n", num);

    return 0;
}