#include <stdio.h>
#include <string.h>

char *getSubString(char *inputStringLength, char *subString,
                   int index, int subStringLength);
int main()
{
    char inputString[100], subString[100];
    int index, subStringLength;
    printf("Enter a String \n");
    gets(inputString);
    printf("Enter starting position of sub-string and it's length \n");
    scanf("%d %d", &index, &subStringLength);

    printf("SubString is : %s \n", getSubString(inputString,
                                                subString, index, subStringLength));
    return 0;
}

char *getSubString(char *inputString, char *subString,
                   int index, int subStringLength)
{
    int i, inputStringLength = strlen(inputString);

    if (index < 0 || index > inputStringLength ||
        (index + subStringLength) > inputStringLength)
    {
        printf("Invalid Input");
        return NULL;
    }
    for (i = 0; i < subStringLength; i++)
    {
        subString[i] = inputString[index++];
    }
    subString[i] = '\0';
    return subString;
}