#include <stdio.h>

int main()
{
    if (0)
    {
        LABEL:
        printf("Did ");
    }
    else
    {
        printf("How ");
        goto LABEL;
    }

    printf("we get here?");
}