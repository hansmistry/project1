#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("a:\n");
    scanf("%d",&a);
    printf("b:\n");
    scanf("%d",&b);
    printf("<:%d\n",a<b);//1
    printf("<=:%d\n",a<=b);//1
    printf(">:%d\n",a>b);//0
    printf(">=:%d\n",a>=b);//0
    printf("==:%d",a==b);//0
    printf("!=:%d",a!=b);//1
        return 0;
}
