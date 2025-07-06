
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
    {
    char ch;

    printf("Enter only 1 character: ");
    ch=getchar();

    if (isprint(ch))
    {
        if (isalpha(ch))
        {
        printf("%c is alphabet\n",ch);
        if (islower(ch))
        {
            printf("%c is lower\n",ch);
            printf("%c is change to uppercase character",toupper(ch));
        }
            if (isupper(ch))
        {
            printf("%c is uppercase\n");
            printf("%c is change to lowercase character",tolower(ch));
        }
        }
        if (isdigit(ch))
        {
        printf("%c is digit",ch);
        }
        if (ispunct(ch))
        {
        printf("%c is punctuation",ch);
        }
        if (isspace(ch))
        {
        printf("%c is space",ch);
        }
        else
        {
        printf("The entered character is not printable");
        }
        printf("\n23AIML070 siddhraj.");
        getch();
        }

    }