#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrimeNumber(int num)
{
    if (num <= 1)
    {
        return false;
    }
    else if (num == 2 || num == 3)
    {
        return true;
    }
    else if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

void printPrimeNumbers(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrimeNumber(i))
            printf("%d ", i);
    }
    printf("\n");
}

float findAverage(int n)
{
    int sum = 0;
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrimeNumber(i))
        {
            sum += i;
            count++;
        }
    }
    return (float)sum / count;
}
double findAverage(int n)
{
    int sum = 0;
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrimeNumber(i))
        {
            sum += i;
            count++;
        }
    }
    return (double)sum / count;
}

void printPrimeNumbers(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrimeNumber(i))
            printf("%d ", i);
    }
    printf("\n");
}
int main()
{

    int number;
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &number);

    if (isPrimeNumber(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);
    // trying something
    printf("Prime numbers upto %d are: ", number);
    printPrimeNumbers(number);
    findAverage(number);
    return 0;
}
