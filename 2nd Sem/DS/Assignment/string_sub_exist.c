#include<stdio.h>

int check(char string1[], char string2[])
{
    int count1 = 0, count2 = 0, i, j, flag;

    while (string1[count1] != '\0')
        count1++;

    while (string2[count2] != '\0')
        count2++;

    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (string1[j] != string2[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    return flag;
}

int main()
{
    char string1[20], string2[20];
   
 
    printf("Enter a string: \n");
    scanf("%s", string1);

    printf("Enter search substring: \n");
    scanf("%s", string2);

    int flag = check(string1, string2);
    
    if (flag)
        printf("String Exists\n");
    else
        printf("String does not Exist\n");
}