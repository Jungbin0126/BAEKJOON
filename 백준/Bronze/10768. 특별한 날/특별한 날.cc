#include <iostream>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==2 and b==18)
    {
        printf("Special");
    }
    else if(a>=2 and b>18)
    {
       printf("After");
    }
    else if (a<=2 and b<18)
    {
       printf("Before");
    }
    else if((a<2 and b<=18) or b>18)
    {
        printf("Before");
    }
   
    else if(a>2 and (b>=18 or b<18))
    {
        printf("After");
    }

  
}