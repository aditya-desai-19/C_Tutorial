#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

double mul(int a, int b){
    return a*b;
}

double div(int a, int b){
    return a/b;
}

int maint()
{
    int num1, num2, ops;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("\nEnter Operations: ");
    printf("\n1. Addition ");
    printf("\n2. Subtraction ");
    printf("\n3. Multiplication ");
    printf("\n4. Division \n");
    scanf("%d",&ops);
    if(ops == 1){
         add(num1, num2);
    }else if(ops == 2){
         sub(num1, num2);
    }else if(ops == 3){
         mul(num1, num2);
    }else if(ops == 4){ 
         div(num1, num2);
    }else{
        printf("Invalid Operation");
    }
    return 0;
}