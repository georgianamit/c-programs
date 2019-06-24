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
int order;
int getSum(int num)
{
    order = getDigitCount(num);
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return pow(num % 10, order) + getSum(num / 10);
    }
}

int main()
{
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = getSum(num);

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}