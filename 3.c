#include <stdio.h>
#include <string.h>

int main()
{
    char Str[100], RevStr[100];
    int i, j, len;

    printf("\n Please Enter any Text :  ");
    gets(Str);

    j = 0;
    len = strlen(Str);

    for (i = len - 1; i >= 0; i--)
    {
        RevStr[j++] = Str[i];
    }
    RevStr[i] = '\0';

    printf("\n And the Result of It is = %s", RevStr);

    return 0;
}