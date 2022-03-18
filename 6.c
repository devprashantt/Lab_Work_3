#include <stdio.h>
#include <string.h>

int main()
{
    char Str[100], CopyStr[100];
    int i, a;

    printf("\n Please Enter any String :  ");
    gets(Str);

    printf("\n Enter the number of elements upto which u want to copy : \n");
    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        CopyStr[i] = Str[i];
    }
    CopyStr[i] = '\0';

    printf("\n String that we coped into CopyStr = %s", CopyStr);
    printf("\n Total Number of Characters that we copied = %d\n", i);

    return 0;
}