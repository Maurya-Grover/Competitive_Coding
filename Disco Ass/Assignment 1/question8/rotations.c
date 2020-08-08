#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int checkPalin(char str[])
{
    int isPalin = 1;
    int length = strlen(str);
    for (int i = 0, j = length -1; i < (length / 2); i++, j--)
    {
        if (str[i] != str[j])
        {
            isPalin = 0;
        }
    }
    return isPalin;
}
void checkRotationIsPalindrome(char string[2000])
{
    int length = strlen(string);
    char end = string[length - 1];    
    for(int i = length -1; i > 0; i--)
    {
        string[i] = string [i-1];
    }
    string[0] = end;
}
int main()
{
    char string[1000];
    gets(string);

    char test_string[2000];
    int i = 0, word_count = 0, k = 0;
    while (string[i] != '\0')
    {
        if (string[i] != ' ')
        {
            test_string[k] = string[i];
            k++;
        }
        else
        {
            checkRotationIsPalindrome(test_string);
            word_count++;
            k = 0;
        }
        i++;
    }

    return 0;
}
