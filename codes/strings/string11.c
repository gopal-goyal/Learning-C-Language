//input a string and check for palindrome or not
#include<stdio.h>
void main()
{
    char a[100];
    int i,k,z;
    printf("enter string element:\n");
    scanf("%c",a);
    for(i=0;i!='\0';i++)
    {
        k++;
    }
    z=k;
    for(i=0;a[i]!='\0';i++,k--)
    {
        if(a[i]==a[k])
        {
            if(i==z)
            {
                printf("the string is palindrome");
            }
        }
        else
        {
            break;
            printf("the string is not palindrome");
        }
    }


}