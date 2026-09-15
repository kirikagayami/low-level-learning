#include <stdio.h>
#include <stddef.h>

struct Student
{
    int age;
    int id;
};

struct Weird
{
    char a;
    int b;
};

int main(void)
{
    printf("offset of age = %zu\n", offsetof(struct Student, age));
    printf("offset of id = %zu\n", offsetof(struct Student, id));

    printf("Weird struct size = %zu\n", sizeof(struct Weird));
    printf("offset of a = %zu\n", offsetof(struct Weird, a));
    printf("offset of b = %zu\n", offsetof(struct Weird, b));
    
    
    // struct Student student;
    // struct Student *p = &student;
    // student.age = 21;
    // student.id = 303068;

    // printf("age = %d\n", student.age);
    // printf("id = %d\n", student.id);

    // printf("\n");

    // printf("sizeof(student) = %zu\n", sizeof(student));
    // printf("&student = %p\n", (void *)&student);
    // printf("&student.age = %p\n", (void *)&student.age);
    // printf("&student.id = %p\n", (void *)&student.id);

    // printf("\n");

    // printf("%p\n", (void *)p);
    // printf("%p\n", (void *)&p->id);
    
    return 0;
}