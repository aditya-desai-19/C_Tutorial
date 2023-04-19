#include <stdio.h>


int main()
{
    //pointer to create new file
    FILE *file = fopen("index.txt", "w");

    //writing to file
    fprintf(file, "Aditya, Junior Developer\n Vishal, Senior Developer");

    //closing file
    fclose(file);
}