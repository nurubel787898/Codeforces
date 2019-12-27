#include<stdio.h>
int gcd(int ,int );
int main()
{
    int t,m,n,i,j,c,k;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        c=0;
        scanf("%d %d",&m,&n);
        k=gcd(m,n);
        for(i=1;i<=k;i++)
        {
           if(k%i==0)
            c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
int gcd(int a,int b)
{
    for(; ; )
    {
        if(a%b==0)
        {
            return b;
        }
        int reminder = a % b;
        a = b;
        b = reminder;
    }
}
