#include <stdio.h>

int main() {
    int a,b,c;
    printf("Please enter the side lengths of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>0 && b>0 && c>0)
        if (a+b>c && a+c>b && b+c>a)
            printf("It is valid triangle");
        else
            printf("This is invalid triangle");
    else
        printf("It is invalid triangle");
    return 0;
}