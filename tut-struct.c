#include <stdio.h>
#include <string.h>

struct Student{
    char name[20];
    int age;
    double cgpa;
    char branch[20];
};

int main() 
{
    struct Student s1;
    //strcpy method copies string to destination
    strcpy(s1.name, "Aditya");
    strcpy(s1.branch, "MCA");
    s1.age = 18;
    s1.cgpa = 8.0;

    printf("Name: %s\n", s1.name);
    printf("Branch: %s\n", s1.branch);
    printf("Age: %d\n", s1.age);
    printf("CGPA: %.2f\n", s1.cgpa);

    return 0;
}