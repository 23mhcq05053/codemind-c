#include<stdio.h>
int main()
{
    int n,r,m=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        m=m+1;
    }
    printf("%d",m);
}