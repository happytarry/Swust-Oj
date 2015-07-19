#include<stdio.h>
int a[2000002];
int n;
int main()
{
    int i,m=0;
    scanf("%d",&n);
    for(i=0;i<n*2+1;i++)
    {
       scanf("%d",&a[i]);
       m=m ^ a[i];
    }
    printf("%d\n",m);
    return 0;
}
