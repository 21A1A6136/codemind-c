#include<stdio.h>
int main()
{
    int temp,r,n,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(temp%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}