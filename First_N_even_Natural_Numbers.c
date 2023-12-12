#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    for(m=n*2;m>0;m=m-2)
    {
        printf("%d ",m);
    }
}