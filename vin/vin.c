#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, char *argv[])
{
    printf("Program name %s\n", argv[0]);

    if (argc == 2)
    {
        printf("Number provided is %s\n", argv[1]);
    }
    string s = get_string("input: ");
    printf("output: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c\n", s[i]);
    }
}