#include<stdio.h>
int main()
{
    int n,ne,r,sum=0;
    scanf("%d",&n);
    ne=n*n;
    while(ne!=0)
    {
        r=ne%10;
        sum=sum+r;
        ne=ne/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}