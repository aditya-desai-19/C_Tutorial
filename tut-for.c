#include <stdio.h>

int main()
{
    int i;
    for(i = 0; i < 5; i++) {
        if(i % 2 == 0){
            printf("\nEven number");
        }else{
            printf("\nOdd number");
        }
    }
    return 0;
}