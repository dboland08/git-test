#include <stdio.h>
#include <string.h>

int main()
{
    char phrase[] = "How did we get here";
    for (int j = 0; j < strlen(phrase); j++)
    {
        for (int i = 0; i < 255; i++)
        {
            if (phrase[j] == (char) i)
            {
                printf("%c", phrase[j]);
            }
        }
    }
}