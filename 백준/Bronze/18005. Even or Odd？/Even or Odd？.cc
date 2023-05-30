
#include <iostream>



int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("0");
      
    }
    else if(n%4!=0)
    {
        printf("1");
        
 
    }
    else if(n%4==0)
    {
        printf("2");
     
    }
}
