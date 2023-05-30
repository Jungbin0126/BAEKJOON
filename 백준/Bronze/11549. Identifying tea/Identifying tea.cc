
#include <iostream>


int main()
{
    int a,sum=0;
    scanf("%d ",&a);
    for(int i=1;i<=5;++i)
    {
        int n;
        scanf("%d",&n);
        if(a==n)
        {
            sum=sum+1;
        }
        
        
        
    }
    printf("%d",sum);
}