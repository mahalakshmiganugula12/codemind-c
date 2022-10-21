#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,z,a;
    scanf("%d%d%d",&x,&y,&z);
    a=pow(x,y);
    printf("%d",a%z);
}