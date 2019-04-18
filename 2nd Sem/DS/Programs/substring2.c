#include <stdio.h>
 
void sub_string(char s[], char sub[], int p, int l);
 
int main() 
{
    char string[20], sub[20];
    int pos, len, i = 0;

    printf("Enter a string: \n");
    scanf("%s", &string);

    printf("Enter the pos and length of substring: \n");
    scanf("%d %d", &pos, &len);

    sub_string(string, sub, pos, len);

    printf("Substring is %s\n", sub);
}

void sub_string(char s[], char sub[], int p, int l) 
{
    int i = 0;

    while (i < l) {
        sub[i] = s[p + i - 1];
        i++;
    }

    sub[i] = '\0';
}