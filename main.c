#include <stdio.h>

int main()
{
    char str[] = "Hello World";
    int i = 11;

    do
    {
        printf("%c", str[i]);
        i--;
    }
    while (i >= 0);

    return 0;
}
