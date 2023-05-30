
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a+b+c!=180)
    {
        printf("Error");
    }
    else if ((a==b or a==c or b==c) and a+b+c==180 and a!=60 and b!=60 and c!=60)
    {
        printf("Isosceles");
    }
    else if(a==60 and b==60 and c==60)
    {
        printf("Equilateral");
    }
    else if(a!=b and b!=c and a!=c and a+b+c==180)
    {
        printf("Scalene");
    }
    
    
}

