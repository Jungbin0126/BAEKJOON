#include <iostream>

int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    if(a>=0 and b>=45)
    {
    printf("%d %d",a,b-45);
    }
     else if(a<=0 and b<45)
    {
        printf("%d %d",a-1+24,b-45+60);
    }
    else if(b-45<=0)
    {
        printf("%d %d",a-1,b-45+60);
    }
   
}