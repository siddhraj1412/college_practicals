#include <stdio.h>
int main()
{
    int A;
    int n;
    char str1[30], str2[30];
    int i, count = 0, count1 = 0;
    char strev[30];
    int j;
    printf("Enter 1 for Length of a string\n
Enter 2 for Reverse string
\nEnter 3 for Compare two strings
\nEnter 4 for Copy one string into another string
\nEnter 5 for Concatenate two strings\n");
    scanf("%d", &A);
    switch (A)
    {
    case 1:

        printf("Enter a String\n");
        scanf("%s", str1);
        for (i = 0; str1[i] != '\0'; i++)
        {
            count++;
        }
        printf("Length of String is %d", count);
    break;
    case 2:

        printf("Enter a String\n");
        scanf("%s", str1);
        for (i = 0; str1[i] != '\0'; i++)
        {
            count++;
        }
        j = count - 1;
        for (i = 0; i < count; i++)
        {
            strev[i] = str1[j];
            j--;
        }
        strev[i] = '\0';
        printf("%s", strev);
    break;
    case 3:

        printf("Enter a String-1\n");
        scanf("%s", str1);

        printf("Enter a String-2\n");
        scanf("%s", str2);

        while (str1[i] != '\0' && str2[i] != '\0')
        {

            if (str1[i] != str2[i])
            {
                count1 = 1;
                break;
            }
            i++;
        }

        if (count1 == 0)
        {
            printf("Equal");
        }
        else
        {
            printf("Not Equal");
        }

    break;
    case 4:

        printf("Enter a string\n");
        scanf("%s", str1);
        for (i = 0; str1[i] != '\0'; i++)
        {
           count++;
        }
        for (i = 0; i < count; i++)
        {
            str2[i] = str1[i];
        }
       str2[i] ='\0';
        printf("after copy string-2 is %s",str2);

    break;
    case 5:

        printf("Enter a string-1\n");
        scanf("%s", str1);
        for (i = 0; str1[i] != '\0'; i++)
        {
            count++;
        }
        printf("Enter a string-2\n");
        scanf("%s", str2);
        for (i = 0; str2[i] != '\0'; i++)
        {
            count1++;
        }
        n = count1 + count;
        for (i = 0; i < n; i++)
        {
            str1[count + i] = str2[i];
        }
        str1[30] = '\0';
        printf("%s", str1);
    }
    printf("\n BY 23DCS045_HKPATEL");
    return 0;
}
