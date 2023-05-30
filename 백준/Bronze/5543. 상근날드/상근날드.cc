
#include <iostream>
int main()
{
    int a,b,c,d,e,min=0, min2=0;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a>min)
    {
        min=a;
    }
    if(b<a)
    {
        min=b;
    }
    if(c<b)
    {
        min=c;
    }
    if(d>min2)
    {
        min2=d;
    }
    if(e<d)
    {
        min2=e;
    }
    printf("%d",min+min2-50);
}
