#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("enter the age:\n");
    scanf("%d",&age);
    if(age>=18){
        printf("you can vote");
    }
    else {
        printf("you can't vote");
    }
    return 0;
}
