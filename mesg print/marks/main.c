#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    printf("marks:\n");
    scanf("%d",&marks);
    if(marks>=35){
        printf("student is passed");
    }
    else{
        printf("student is fail");
    }
    return 0;
}
