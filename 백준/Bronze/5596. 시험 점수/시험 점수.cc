#include <iostream>

int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
    if(a+b+c+d>e+f+g+h)
    {
        printf("%d",a+b+c+d);
    }
    else if(a+b+c+d<e+f+g+h)
    {
        printf("%d",e+f+g+h);    
    }
    else if(a+b+c+d==e+f+g+h)
    {
        printf("%d",a+b+c+d);
    }
}