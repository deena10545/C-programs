#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    printf("Enter a string:");
    gets(str);
    int n=strlen(str);
    int i=0;
    int j=n-1;
    int temp;
    while(i<j)
    {
       if(!(str[i]>='0' && str[i]<='9'))
            i++;
       else if(!(str[j]>='0' && str[j]<='9'))
            j--;
       else if(i<j)
       {
           temp=str[i];
           str[i]=str[j];
           str[j]=temp;
           i++;
           j--;
       }
    }
    printf("%s\n",str);
}
