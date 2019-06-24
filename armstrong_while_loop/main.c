#include <stdio.h>
#include <math.h>

int getDigitCount(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int main()
{
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int order = getDigitCount(num);

    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, order);
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}