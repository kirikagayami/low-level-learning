#include <stdio.h>

struct Student
{
    int age;
    int id;
};

int main(void)
{
    struct Student student;
    struct Student *p = &student;
    student.age = 21;
    student.id = 303068;

    printf("age = %d\n", student.age);
    printf("id = %d\n", student.id);

    printf("\n");

    printf("sizeof(student) = %zu\n", sizeof(student));
    printf("&student = %p\n", (void *)&student);
    printf("&student.age = %p\n", (void *)&student.age);
    printf("&student.id = %p\n", (void *)&student.id);

    printf("\n");

    printf("%p\n", (void *)p);
    printf("%p\n", (void *)&p->id);
    
    return 0;
}