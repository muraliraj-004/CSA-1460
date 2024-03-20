#include <stdio.h>
#include <stdlib.h>

int main()
{
    char identifier[100];

    printf("Enter an identifier: ");
    scanf("%s", identifier);

    if (identifier[0] == '_' || (identifier[0] >= 'a' && identifier[0] <= 'z') || (identifier[0] >= 'A' && identifier[0] <= 'Z'))
    {
        int i = 1;
        while (identifier[i] != '\0')
        {
            if (identifier[i] == '_' || (identifier[i] >= 'a' && identifier[i] <= 'z') || (identifier[i] >= 'A' && identifier[i] <= 'Z') || (identifier[i] >= '0' && identifier[i] <= '9'))
            {
                i++;
            }
            else
            {
                printf("Invalid identifier.\n");
                return 0;
            }
        }

        printf("Valid identifier.\n");
    }
    else
    {
        printf("Invalid identifier.\n");
    }

    return 0;
}