#include <stdio.h>

int main()
{
    if (1 > 0)
    {
        printf("How ");
        goto LABEL;
    }
    else
    {
        LABEL:
        printf("Did ");
    }

    printf("we get here?");
}