#include <stdio.h>

int area(int x, int y){
    return x*y;
}

int main()
{
    int l, b;
    printf("\nEnter length and breadth: ");
    scanf("%d %d",&l, &b);
    printf("\nArea of %d x %d is %d", l, b, area(l, b));
    return 0;
}