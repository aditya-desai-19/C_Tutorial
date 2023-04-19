#include <stdio.h>

int main()
{
    int age = 20;
    //Pointer is a variable which stores address of another variable
    int *ptr = &age;
    
    //Dereferencing the pointer
    printf("Age is %d\n", *ptr);
}