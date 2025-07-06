
#include <stdio.h>

int main()
{
    int A;
    char str1[30], str2[30];
    int i, count = 0, count1 = 0;
    char strev[30];
    int j;

    printf("Enter 1 for Length of a string\nEnter 2 for Reverse string\nEnter 3 for Compare two strings\nEnter 4 for Copy one string into another string\nEnter 5 for Concatenate two strings\n");
    printf("------------------------------------\n");
    printf("enter your response: ");
    scanf("%d", &A);
    printf("------------------------------------\n");
    switch (A)
    {
    case 1:
        printf("Enter a String: ");
        getchar();
        scanf("%[^\n]",str1);
        for (i = 0; str1[i] != '\0'; i++){
            count++;
        }
        printf("Length of String is: %d", count);
        break;
    
    case 2:
        printf("Enter a String: ");
        getchar();
        scanf("%[^\n]", str1);
        for (i = 0; str1[i] != '\0'; i++){
            count++;
        }

        j = count - 1;
        for (i = 0; i < count; i++){
            strev[i] = str1[j];
            j--;
        }

        strev[i] = '\0';
        printf("Reverse String: %s", strev);
        break;
    
    case 3:
        printf("Enter a String-1: ");
        getchar();
        scanf("%[^\n]", str1);

        printf("Enter a String-2: ");
        getchar();
        scanf("%[^\n]", str2);
      
        while (str1[i] != '\0' && str2[i] != '\0'){

            if (str1[i] != str2[i]){
                count1 = 1;
                break;
            }
            i++;
        }

        if (count1 == 0)
            printf("Equal.");
        else        
            printf("Not Equal.");
        break;
    
    case 4:
        printf("Enter a string: ");
        getchar();
        scanf("%[^\n]", str1);
        
        for (i = 0; str1[i] != '\0'; i++){
           count++;
        }

        for (i = 0; i < count; i++){
            str2[i] = str1[i];
        }
        str2[i] ='\0';
        printf("after copying, string-2 is: %s",str2);

        break;
    
    case 5:
        int n;
        printf("Enter a string-1: ");
        getchar();
        scanf("%[^\n]", str1);
        for (i = 0; str1[i] != '\0'; i++){
            count++;
        }

        printf("Enter a string-2: ");
        getchar();
        scanf("%[^\n]", str2);
        for (i = 0; str2[i] != '\0'; i++){
            count1++;
        }

        n = count1 + count;
        for (i = 0; i < n; i++){
            str1[count + i] = str2[i];
        }

        str1[i] = '\0';
        printf("%s", str1);
    }
    printf("\n-------------------------------------------------------");
    printf("\n23AIML070 Siddhraj");
    
}
