#include<stdio.h>
//#include<string.h>
int main()
{
   char n[25],temp;
   int l,i=0,j;
   int Stringlength(char a[]);
   printf("Enter your name:");
   gets(n);
   l=Stringlength(n);
   printf("lenght of string:%d\n",l);
   //printf("%s",strlwr(n));
    while(n[i]!='\0')
    {
       if(n[i]>=65&&n[i]<=90)
       {
           n[i]=n[i]+32;       }
           i++;
    }
    printf("%s\n",n);
    for(j=l-1;j>=0;j--)
    {
        printf("%c",n);
    }
}
int Stringlength(char a[])
{
    int count=0,i=0;
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
