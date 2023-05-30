
#include <iostream>


int main()
{
    int a,sum=0;
    scanf("%d",&a);
    for(int i=1;i<=9;++i)
    {
        int n;
        scanf("%d",&n);
        if(n<a)
        {
            sum=sum+n;
        }
    }
    printf("%d",a-sum);
} 