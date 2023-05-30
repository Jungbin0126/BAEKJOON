
#include <iostream>



int main()
{
    int a[10],b[10],z=0,a2=0,a3=0,b2=0,b3=0,x=0;
    scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&b[0],&b[1],&b[2]);
    z=a[0]*3;
    a2=a[1]*2;
    a3=a[2];
    x=b[0]*3;
    b2=b[1]*2;
    b3=b[2];
    if(z+a2+a3> x+b2+b3)
    {
        printf("A");
    }
    else if(z+a2+a3 < x+b2+b3)
    {
        printf("B");
    }
    else if(z+a2+a3 == x+b2+b3)
    {
        printf("T");
    }
}
