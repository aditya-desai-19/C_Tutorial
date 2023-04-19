#include <stdio.h>

int main()
{
    char msg[100];

    FILE *file = fopen("index.txt", "r");

    for(int i = 0; i < 2; i++){
        //fgets stores txt line in msg
        fgets(msg, sizeof(msg), file);
        printf("%s\n", msg);
    }
    
    return 0;

}