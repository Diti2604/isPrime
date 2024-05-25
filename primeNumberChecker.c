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
    return 0;
}
