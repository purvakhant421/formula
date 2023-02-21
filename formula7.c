#include <stdio.h>
int main()
{
    int w,x,y,z;
    printf("Enter value x:\n");
    scanf("%d",&x);
    printf("Enter value y:\n");
    scanf("%d",&y);
    printf("Enter value z:\n");
    scanf("%d",&z);
    w = (x+y+z)*(x+y+z);
    printf("Final answer is:%d",w);
    return 0;
}
