#include <stdio.h>
#include <stdbool.h>
int main() {
    int a,b;
    bool funny;
    printf("Enter two spaced numbers\n ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf(" Initially---> a=%d and b=%d\n",a,b);
    a=a+b-a;
    b=a+b-b;
    printf(" After swapping---> a=%d and b=%d",a,b);
    return 0;
}
