#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter value x:\n");
    scanf("%d",&x);
    printf("Enter value y:\n");
    scanf("%d",&y);
    z = (x-y)*(x-y);
    printf("Final answer is:%d",z);
    return 0;
}
