#include <stdio.h>
#include <math.h>

int reverse(int n);
int isPalindrome(int n);
int rev = 0;

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n) == 1)
    {
        printf("%d is palindrome\n", n);
    }
    else
    {
        printf("%d is NOT a palindrome\n", n);
    }
}

int isPalindrome(int n)
{
    if (n == reverse(n))
    {
        return 1;
    }

    return 0;
}

int reverse(int n)
{
    if (n == 0)
        return rev;
    else
    {
        rev = (rev * 10) + (n % 10);
        return reverse(n / 10);
    }
}