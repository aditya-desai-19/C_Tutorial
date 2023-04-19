#include <stdio.h>

int main() {
    int secret_number = 5;
    int guess;

    while(secret_number != guess){
        printf("Enter a number between 0 and 10: ");
        scanf("%d", &guess);
    }
    printf("\nSuccess");

    return 0;
}