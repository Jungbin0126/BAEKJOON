#include <iostream>


int main()
{
    int n,sum=0,add=0;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            sum=sum+1;
        }
        if(b>a)
        {
            add=add+1;
        }
        
        
    }
    printf("%d %d",sum,add);
} 