#include<stdio.h>
int main()
{
    int p,x;
    float sum;
    scanf("%d%d",&x,&p);
    sum=x;
    while(x!=0)
    {
        x=x-(p*x/100);
        sum+=x;
    }
    printf("%f",sum);
}
