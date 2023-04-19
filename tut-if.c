#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if(n < 0){
        printf("\nNegative number");
    }else{
        printf("Positive number");
    }

    return 0;
}