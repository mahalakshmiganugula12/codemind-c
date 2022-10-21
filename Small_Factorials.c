#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   
        int a, prod=1;
        scanf("%d",&a);
        for(int j=1;j<=a;j++)
        prod=prod*j;
        printf("%d
",prod);
    }
    return 0;


}