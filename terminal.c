//Program to categorize a single character that is entered at the terminal

#include <stdio.h>

int main (void)
{
    char c;

    printf ("Enter a single character:\n ");
    scanf ("%c", &c);

    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

        printf ("Its an alphabetic character.\n");
    else if ( c >= '0' && c <= '9')
        printf("Its a digit .\n");
    else 
        printf ("Its a special character.\n");
    return 0;
    
}