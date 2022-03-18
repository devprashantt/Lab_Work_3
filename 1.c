#include <stdio.h>

void compareStrings(char *x, char *y)
{
    int flag = 0;

    while (*x != '\0' || *y != '\0')
    {
        if (*x == *y)
        {
            x++;
            y++;
        }

        else if ((*x == '\0' && *y != '\0') || (*x != '\0' && *y == '\0') || *x != *y)
        {
            flag = 1;
            printf("Unequal Strings\n");
            break;
        }
    }

    if (flag == 0)
    {
        printf("Equal Strings\n");
    }
}

int main(void)
{
    char s1[20] = "python";
    char s2[20] = "dsa";

    compareStrings(s1, s2);
    return 0;
}
