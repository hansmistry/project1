#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d=0;
    printf("a:\n");
    scanf("%d",&a);
    printf("b:\n");
    scanf("%d",&b);
    printf("c:\n");
    scanf("%d",&c);
    d=b*b-4*a*c;
    printf("d:%d",d);
    return 0;
}
